#include<stdio.h>
#include<conio.h>
#include<string.h>


void play(word, n, ans);
void draw(miss);
void game_board(n, ans);
void input();
void alpha(tray,guess);

void main()
{
	FILE* fp;
	char data[100];
	fp = fopen("art.txt", "r");
	while (fgets(data, 100, fp) != NULL)
	{
		printf("%s", data);
	}
	fclose(fp);
	_getch();
	system("cls");
	input();
	_getch();
}

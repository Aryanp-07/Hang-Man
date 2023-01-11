#include<stdio.h>

void game_board(int n, char ans[])
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf(" %c", ans[i]);
	}
	printf("\n");
}

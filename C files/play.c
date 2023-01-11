#include<stdio.h>

void play(char word[], int n, char ans[])
{
	int i = 0, count = 0, miss = 0, strikes = 0;
	char guess=' ', consent[5];
	for (i = 0; i < n - 1; i++)
	{
		ans[i] = '_';
		if (word[i] == ' ')
		{
			ans[i] = ' ';
		}
	}
	ans[i] = '\0';
	int ch = 97;
	char tray[26];
	for (int j = 0; j < 26; j++)
	{
		if (ch >= 97 && ch <= 122)
		{
			tray[j] = (char)ch;
			ch++;
		}
	}
	

	while (miss != 6 && strikes != n)
	{

		printf("\n\n\n");
		count = 0;
		for (int j = 0; j < 26; j++)
		{
			printf("%c ", tray[j]);
		}
		printf("\n\nEnter your guess character\n");
		game_board(n, ans);
		draw(miss);
		//_getchar();
		alpha(tray, guess);
		scanf_s("%c", &guess);
		for (i = 0; i < n; i++)
		{
			if (guess == word[i])
			{
				ans[i] = guess;
			}
			else
			{
				count++;
			}
		}

		//game_board(n, ans);
		if (count == (n))
		{
			miss++;
		}
		strikes = 0;
		for (i = 0; i < n; i++)
		{
			if (ans[i] == word[i])
			{
				strikes++;

			}
		}
		system("cls");
	}
	if (strikes == n)
	{
		game_board(n, ans);
		draw(miss);
		printf("YOU WIN!\n\n");
		_getch();
	}

	if (miss == 6)
	{
		game_board(n, ans);
		draw(miss);
		printf("The correct answer is - %s", word);
		printf("YOU LOSE!\n");
	}
	printf("Do you wish to continue? yes or no\n");
	scanf(" %s", consent);
	if (strcmp(consent, "yes") == 0)
	{
		input();
	}
	else
	{
		exit(0);
	}
}


#include<stdio.h>
void alpha(char tray[],char guess)
{
	for (int i = 0; i < 26; i++)
	{
		if (tray[i] == guess)
		{
			tray[i] = ' ';
		}
	}
	printf("\n");
}
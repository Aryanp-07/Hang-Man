#include<stdio.h>


int t1 = 0; //t2 = 0;							//Global Variable declaration
int c1 = 0, c2 = 0, c3 = 0, c4 = 0;				//Global Variable declaration

void input()
{
	int i, n, s;
	char word[50], ans[50];
	int next = 0, try = 0;

	FILE* ptr;
	ptr = NULL;
	printf("Themes Available -\n1. ASTRONOMY\n2. COUNTRIES\n3. GAMES\n4. MOVIES AND TV SHOWS\n\n");
	printf("Enter the theme of choice\n");
	scanf_s("%d", &t1);
	// printf("%d", t1);//test case

	switch (t1)		//Open file of theme chosen to assign the word
	{
	case 1: ptr = fopen("astronomy.txt", "r");
		// printf("Successfully opened astronomy.txt\n"); //test point
		c1++;
		next = c1;
		break;
	case 2: ptr = fopen("countries.txt", "r");
		// printf("Successfully opened countries.txt\n"); //test point
		c2++;
		next = c2;
		break;
	case 3: ptr = fopen("games.txt", "r");
		// printf("Successfully opened games.txt\n"); //test point
		c3++;
		next = c3;
		break;
	case 4: ptr = fopen("movies and shows.txt", "r");
		// printf("Successfully opened movies and shows.txt\n"); //test point
		c4++;
		next = c4;
		break;
	default: printf("Theme not available\n");
		exit(0);
	}

	//if (t1 == t2)
	//{
	//	printf("continued with the same file\n"); // test point
	//	_getch();// test point
	//}

	while ((next > try) && fgets(word, 50, ptr) != NULL)
	{
		// printf(" %s\n", word);// test point
		n = strlen(word);
		// printf("%d\n", n-1);// test point
		try++;
	}
	//_getch(); // kept for verification
	system("cls");
	play(word, n, ans);
}
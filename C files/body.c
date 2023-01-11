
void draw(int miss)
{
	//bar
	printf("\t\t\t\t\t\t\t\t\t\t------------------\n");
	printf("\t\t\t\t\t\t\t\t\t\t|\t\t | \n");
	printf("\t\t\t\t\t\t\t\t\t\t|\t\t | \n");
	printf("\t\t\t\t\t\t\t\t\t\t|\t\t | \n");
	printf("\t\t\t\t\t\t\t\t\t\t|");
	if (miss >= 1)
	{
		//pole and face
		printf("\t\t 0\n");
	}
	else
	{
		printf("\n");
	}
	printf("\t\t\t\t\t\t\t\t\t\t|");
	if (miss >= 2)
	{
		//pole and neck
		printf("\t\t |\n");

	}
	else
	{
		printf("\n");
	}
	printf("\t\t\t\t\t\t\t\t\t\t|");
	if (miss >= 3)
	{
		//body with hands
		printf("\t\t/$\\ \n");
	}
	else
	{
		printf("\n");
	}
	printf("\t\t\t\t\t\t\t\t\t\t|");
	if (miss >= 4)
	{
		//body 2
		printf("\t\t $  \n");

	}
	else
	{
		printf("\n");
	}
	printf("\t\t\t\t\t\t\t\t\t\t|");
	if (miss >= 5)
	{
		//body 3
		printf("\t\t $  \n");

	}
	else
	{
		printf("\n");
	}
	printf("\t\t\t\t\t\t\t\t\t\t|");
	if (miss == 6)
	{
		//legs
		printf("\t\t/ \\ \n");
	}
	else
	{
		printf("\n");
	}
	printf("\t\t\t\t\t\t\t\t\t\t|\n");
	printf("\t\t\t\t\t\t\t\t\t\t|\n");
}

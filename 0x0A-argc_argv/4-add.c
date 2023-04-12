#include "main.h"
#include <stdlib.h>


/**
  * main - adds positive numbers
  * @argc: number of arguements passed in the program
  * @argv: pointer to arguements passed
  * Return: Zero if success
  */

int main(int argc, char *argv[])
{
	int i, sum, num;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num == 0)
			printf("Error\n");
		else
			sum += num;
	}
	printf("%d\n", sum);
	}


	return (0);
}

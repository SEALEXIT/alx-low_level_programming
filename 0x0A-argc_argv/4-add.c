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
	int count, i, sum, num;

	count = 0;

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
			count++;
		else
			sum += num;
	}
	if (count == 0)
	printf("%d\n", sum);
	else
		printf("Error\n");
	}


	return (0);
}

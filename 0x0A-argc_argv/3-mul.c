#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
  * main - accepts arguements and multiplies them
  * @argc: number of arguements passed
  * @argv: Pointer to arguements in string passed
  * Return: Zero is success
  */

int main(int argc, char *argv[])
{
	int i, ans;

	ans = 1;

	if  (argc < 3)
	{
		printf("Error\n");
	}
	else
	{

	for (i = 1; i < argc; i++)
	{
		ans *= atoi(argv[i]);
	}
	printf("%d\n", ans);
	}

	return (0);
}


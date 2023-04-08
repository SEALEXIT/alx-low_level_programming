#include <stdio.h>

/**
  * main - Start of the program
  * @argc - number of arguements passed
  * @argv: Pointer to string of vector passed to program
  * Return: Zero if program success
  */

int main(int argc, char *argv[])
{

	int i;

	for ( i = 0; i < argc; i++)
	{

	printf("%s\n", argv[i]);
	}
	return (0);
}

#include "main.h"

/**
  * main - prints all arguements it receives
  * @argc: number of arguements
  * @argv: Pointer to arguements passed to program
  * Return: Zero if success
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

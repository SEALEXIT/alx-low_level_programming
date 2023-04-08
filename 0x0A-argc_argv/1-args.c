#include "main.h"

/**
  * main - prints number of arguements passed in a program
  * @argc: The number of arguements passed
  * @argv: Pointer to the string of arguements passed
  * Return: Zero if successful
  */

int main(int argc, char *argv[])
{

	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

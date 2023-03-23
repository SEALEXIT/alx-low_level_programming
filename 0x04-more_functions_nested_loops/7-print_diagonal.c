#include "main.h"

/**
  * print_diagonal - prints lines in diagonal
  * @n: number of diagonals needed
  * Return: Number of diagonals
  */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(32);
		_putchar(92);
		_putchar('\n');
	}
	}
}

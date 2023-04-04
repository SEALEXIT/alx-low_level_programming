#include "main.h"

/**
  * print_diagsums - prints sum of diagonals
  * @a: the array in question
  * @size: dimensions of array
  * Return: Nothing
  */

void print_diagsums(int *a, int size)
{
	int i, j, res, k, sum, counter;

	counter = size;
	k = 0;

	for (i = 0; i < size; i++)
	{
		for (j = i; j < i + 1; j++)
		{
			res += a[i][j];
		}
	}

	for (i = 0; i < size; i++)
	{
		for (j = counter; j < counter - 1; j++)
		{
			sum += a[i][j];
		}
	}

	_putchar(res + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(sum + '0');
	_putchar('\n');
}

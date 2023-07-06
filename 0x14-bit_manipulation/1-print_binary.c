#include "main.h"

/**
  * print_binary - prints to binary of a number
  * @n: long Int passed to function
  *
  * Return: Binary version of the integer
  */

void print_binary(unsigned long int n)
{
	int j, counter = 0;
	unsigned long int cur;

	for (j = 63; j >= 0; j--)
	{
		cur = n >> j;

		if (cur & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}

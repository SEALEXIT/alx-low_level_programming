#include "main.h"

/**
  * print_binary - converts integer to binary
  * @n: integer value
  * Return: NOthing
  */

void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;

		if (curr & 1)
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

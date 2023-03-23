#include "main.h"

/**
  * print_line - prints lines
  * @n: number of _ characters to be printed
  * Return: Returns no value
  */

void print_line(int n)
{
	int l;

	l = 0;

	for (l = 1; l <= n; l++)
		_putchar('_');
	_putchar('\n');

}

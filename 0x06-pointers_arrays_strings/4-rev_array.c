#include "main.h"
#include <stdio.h>

/**
  * reverse_array - reverses contents of an array of integers
  * @a: array values
  * @n: numbers of values in array
  * Return: No return value
  */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		putchar(a[i] + '0');

		if ( i != 0  )
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}

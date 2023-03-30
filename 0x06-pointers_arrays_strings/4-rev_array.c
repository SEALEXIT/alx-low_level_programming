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
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}

}

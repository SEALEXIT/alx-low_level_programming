#include "main.h"

/**
  * flip_bits - function to count number of bits to change
  * @n: first number
  * @m: Second number
  *
  * Return: number of bits to be changed
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, counter = 0;
	unsigned long int excl = n ^ m;
	unsigned long int curr;

	for (k = 63; k >= 0; k--)
	{
		curr = excl >> k;

		if (curr & 1)
			counter++;
	}

	return (counter);
}

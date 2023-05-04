#include "main.h"

/**
  * flip_bits - gets the number of bits needed to flip to get
  * @n: integer value
  * @m: value
  * Return: Returns
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int i, counter = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;

		if (current & 1)
			counter++;
	}
	return (counter);

}

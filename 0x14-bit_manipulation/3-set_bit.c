#include "main.h"

/**
  * set_bit - set value of a bit to 1 in a given index
  * @n: address of int value
  * @index: index position
  * Return: 1 if it worked , -1 if there was an error
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

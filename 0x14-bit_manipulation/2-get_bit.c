#include "main.h"

/**
  * get_bit - gets the bit at a given index
  * @n: integer value
  * @index: index position
  * Return: bit value
  */

int get_bit(unsigned long int n, unsigned int index)
{

	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}


#include "main.h"

/**
  * get_bit - return value of a bit at a specific index
  * @n: number to be searched
  * @index: index of the bit
  *
  * Return: Bit value
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;

	if (index > 63)
		return (-1);

	bitvalue = (n >> index) & 1;

	return (bitvalue);
}

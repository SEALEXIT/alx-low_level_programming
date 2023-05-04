#include "main.h"

/**
  * clear_bit - set value to 0 in a given index
  * @n: Adress of integer value
  * @index: index of the position
  * Return: 1 if worked else -1
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1Ul << index) & *n);

	return (1);
}

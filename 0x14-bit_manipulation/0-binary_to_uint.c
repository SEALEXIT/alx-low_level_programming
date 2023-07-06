#include "main.h"

/**
  * binary_to_uint - function to convert binary to unsigned int
  * @b: binary number being passed to the function
  *
  * Return: unsigned int
  */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int decimal = 0;

	if (!b)
		return (0);
	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		decimal = 2 * decimal + (b[k] - '0');
	}
	return (decimal);
}

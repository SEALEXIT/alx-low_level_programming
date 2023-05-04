#include "main.h"

/**
  * binary_to_uint - converts binary to integer
  * @b: string of 0's and 1's
  * Return: integer value
  */

unsigned int binary_to_uint(const char *b)
{
	int len, i, val, integer;

	len = strlen(b);
	val = 1;
	integer = 0;

	if (b == NULL)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] >= 'a')
			return (0);
		else if (b[i] == '1')
			integer += val;

		val *= 2;
	}
	return (integer);
}


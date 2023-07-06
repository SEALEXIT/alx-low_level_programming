#include "main.h"

/**
  * get_endianness - checking if machine is a little or a big endian
  *
  * Return: 0 for big, 1 for little
  */

int get_endianness(void)
{
	unsigned int k = 1;
	char *st = (char *) &k;

	return (*st);
}

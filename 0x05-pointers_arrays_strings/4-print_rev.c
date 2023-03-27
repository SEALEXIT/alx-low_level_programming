#include "main.h"
#include <string.h>

/**
  * print_rev - Prints string in reverse
  * @s: The string memory adress
  * Return:No return Value
  */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

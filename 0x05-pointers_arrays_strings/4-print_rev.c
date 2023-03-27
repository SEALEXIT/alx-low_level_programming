#include "main.h"

/**
  * print_rev - Prints string in reverse
  * @s: The string memory adress
  * Return:No return Value
  */

void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}

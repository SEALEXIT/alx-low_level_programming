#include "main.h"

/**
  * rev_string - Prints string in Reverse
  * @s:  the  string
  * Return: No value returned
  */

void rev_string(char *s)
{
	if (*s != '\0')
	{
		rev_string(s + 1);
		_putchar(*s);
	}
}

#include "main.h"

/**
  * puts2 - prints every other character
  * @str: string of numbers
  * Return: No Value
  */

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
		j++;
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


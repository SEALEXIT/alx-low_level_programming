#include "main.h"

/**
  * _isupper - checks for uppercase characters
  * @c: character typed
  * Return: 1 if c is uppercase or 0 if lowercase
  */

int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
		result = 1;
	else
		result = 0;

	return (result);
}

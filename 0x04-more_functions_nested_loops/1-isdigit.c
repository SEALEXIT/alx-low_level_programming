#include "main.h"

/**
  * _isdigit - checksfor a digit
  * @c: Input
  * Return: 1 if c is a digit else otherwise
  */

int _isdigit(int c)
{
	int result;

	if ((c >= 0 && c <= 9) || (c >= '0' && c <= '9'))
		result = 1;
	else
		result = 0;
	return (result);
}

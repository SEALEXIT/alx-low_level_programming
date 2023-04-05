#include "main.h"

/**
  * factorial - Computes factorial of a number
  * @n: The number
  * Return: The factorial
  */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n >= 0)
	return (n * factorial(n - 1));
	else
		return (-1);
}

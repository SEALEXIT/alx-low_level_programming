#include "main.h"

/**
  * _sqrt_recursion - Computes squiroot of a number
  * @n: the number
  * Return: The squireroot
  */

int _sqrt_recursion(int n)
{
	if ((n < 0) || (n % 10 != 0))
	{
		return (-1);
	}
	else
	{
		return (sqrt(n) * _sqrt_recursion(n - 1);
	}
}
				
				


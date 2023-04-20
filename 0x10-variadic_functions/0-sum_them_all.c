#include "variadic_functions.h"

/**
  * sum_them_all - variadic function that adds upp all its parameters
  * @n: number of arguements passed
  * Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list args;

	sum = 0;
	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}


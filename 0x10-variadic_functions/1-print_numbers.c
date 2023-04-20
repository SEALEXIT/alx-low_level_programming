#include "variadic_functions.h"

/**
  * print_numbers - variadic function that prints out its arguements
  * @separator: string to be printed between numbers
  * @n: number of parameters
  * Return: Nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j, len;


	va_list numbers;

	len = strlen(separator);

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (i < n - 1)
		{
		for (j = 0; j < len; j++)
		{
			printf("%c", separator[j]);
		}
		}
	}
	printf("\n");
	va_end(numbers);
}

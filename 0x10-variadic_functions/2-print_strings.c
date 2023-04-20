#include "variadic_functions.h"

/**
  * print_strings - variadic function that prints string followed by a new line
  * @separator: string separator
  * @n: No of arguements passed
  * Return: Nothing
  */

void print_strings(const char *separator, unsigned int n, ...)
{
	unsigned int i, j, len;

	va_list args;

	va_start(args, n);

	len = strlen(separator);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));

		if (i < n - 1)
		{
		for (j = 0; j < len; j++)
		{
			if (separator[j] != 0)
				printf("%c", separator[j]);
		}
		}
	}
	printf("\n");
	va_end(args);
}



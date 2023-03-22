#include "main.h"

/**
  * print_last_digit - Prints the last digit
  *@n: the number
  *Return: value of the last digit
  */
int print_last_digit(int n)
{

	int last = n % 10;

	_putchar(last + '0');
	return (0);
}


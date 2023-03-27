#include "main.h"

/**
  * swap_int - Swaps two numbers
  * @a: memory of first number
  * @b: memory of second number
  * Return: No return value
  */

void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}

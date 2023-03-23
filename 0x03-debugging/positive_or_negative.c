#include "main.h"

/**
 * positive_or_negative - Checks if random number generated is positive,negative or a zero
 *@i: accepts a number
 * Return: does not return anything
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}

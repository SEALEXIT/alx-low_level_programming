#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int hex;

	for (num = 0; num < 10; num++)
	{

		putchar((num % 10) + '0');
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}

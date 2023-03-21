#include <stdio.h>

/**
 * main - Print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{

	char i;

	for (i = 'a'; i <= 'z'; i++)
	{

		putchar(i);
	}
}
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}


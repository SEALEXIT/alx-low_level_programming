#include <stdio.h>

/**
 * main - Print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	void print_alphabet(void)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{

			putchar(i);
		}
	}
	print_alphabet();
	putchar('\n');
	return (0);
}


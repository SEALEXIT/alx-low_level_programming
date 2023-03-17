#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{

		if (lc != 'e')
			if (lc != 'q')
			putchar(lc);
	}
	putchar('\n');
	return (0);
}

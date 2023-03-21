#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c);
{
	int res;

	if ('z' >= c >= 'a')
	{
		res = printf("%d\n", 1);
	}else
	{
		res = printf("%d\n", 0);
	}
	return (res);
}
int main(void)
{
	int op, i;

	printf(" If your input is a lowercase character , ouptup will be 1\n");
	printf("\t\tELSE OUTPUT WILL BE : 0\n");
	printf("Enter your character :\t");
	scanf("%d", i);

	op = _islower(i);
	putchar(op);
	return (0);
}

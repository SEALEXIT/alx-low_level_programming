#include <stdio.h>
int main(void)
{
	int size, i, j;

	printf("Enter squire size\t");
	scanf("%d", &size);

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
	for (i = 1; i <= size; i++)
	{
		for (j =1; j <= size; j++)
			putchar(35);
		printf("\n");
	}
	putchar('\n');
	}
	return (0);
}

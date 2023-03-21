#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
}
int main(void)
{
	 int a;
	 
	 for (a = 0; a <= 9; a++)
	 {

		 print_alphabet_x10();
		 printf("\n");
	 }
	 putchar('\n');
	 return (0);
}

#include "main.h"

/**
  * multiply - Multiplies two numbers
  * @a: first number
  * @b: second number
  * Return: answer 
  */

int *multiply(int a, int b);
/**
  * main - Start of the program
  * @argc: No of arguements passed
  * @argv: Pointer to arguements passsed
  * Return: Zero if success
  */

int main(int argc, char *argv[])
{
	int *mul;
	int num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (argc != 3 || num1 == 0 || num2 == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	mul = multiply(num1, num2);

	_putchar(mul[0] + '0');
	_putchar('\n');


	return (0);
}

int *multiply(int a, int b)
{
	int k, *kk;

	k = a * b;

	kk = (int *)malloc(sizeof(int));
	kk[0] = k;

	return (kk);
}

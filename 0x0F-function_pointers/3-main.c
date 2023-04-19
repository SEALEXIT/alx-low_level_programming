#include "3-calc.h"

/**
  * main - start of the program
  * @argc: Number of arguements passed
  * @argv: pointer to arguements passed
  * Return: Zero if success
  */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char operator = argv[2];
	int calc, i;

	calc = 0;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (operator != '+' || operator != '-' || operator != '*' || operator != '/' || operator != '%')
	{
		printf("Error\n");
		exit(99);
	}


	op_t ops[]
	{
		{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div}, {"%", op_mod}, {NULL, NULL}};

	int (*point)(int, int) = get_op_func(ops);

	calc = point(num1, num2);
	printf("%d\n", calc);
}


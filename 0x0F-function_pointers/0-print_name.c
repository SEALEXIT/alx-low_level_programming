#include "function_pointers.h"

/**
  * print_name - priints the name
  * @name: string of name
  * @f: pointer to function
  * Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	void (*point)(char *) = f;

	point(name);

}

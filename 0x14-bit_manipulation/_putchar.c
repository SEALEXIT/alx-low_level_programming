#include <unistd.h>

/**
   * _putchar - function to print one character
   * @c: the character being passed into the function
   * Return: Character 
   */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


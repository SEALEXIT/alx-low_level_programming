#include <stdio.h>
#include <unistd.h>
/**
  * main - prints to the standard error.
  *RETURN: 1 if success.
  */
int main(void)
{
	write(2,"and that piece of art is useful - Dora kortpar, 2015-10-19\n", 58);
	return (1);
}

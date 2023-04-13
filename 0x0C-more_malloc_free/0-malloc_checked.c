#include "main.h"

/**
  * malloc_checked - allocates memory in heap of mem
  * @b: Size of memomory to allocate
  * Return: Nothing
  */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	
	return (ptr);
}

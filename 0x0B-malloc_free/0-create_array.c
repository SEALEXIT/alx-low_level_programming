#include "main.h"

/**
  * create_array - pointer function to allocate memory
  * @size: size of the memory size to be allocated
  * @c: character of the array
  * Return: pointer to adress of the memory allocated
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);

}

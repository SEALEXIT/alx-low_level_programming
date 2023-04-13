#include "main.h"
/**
  * _calloc - allocates memory for an array
  * @nmemb: number of values int the array
  * @size: size of array
  * Return: Nothing
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = (int *)calloc(nmemb, size * sizeof(int));

	if (array == NULL)
		return (NULL);

	return (array);
}

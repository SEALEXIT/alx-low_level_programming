#include "main.h"
/**
  * array_range - creates array of integers and allocates memory
  * @min: lowest value of the array
  * @max: largest value of array
  * Return: pointer to the memory storing the  array
  */

int *array_range(int min, int max)
{
	int *arr, i, l;

	if (min > max)
		return (NULL);
	l = max + 1;

	arr = (int *)malloc(l * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		*(arr + i) = i;
	}
	return (arr);
}

#include "function_pointers.h"

/**
  * int_index - callback function that searches for integer
  * @array: array we will be traversing
  * @size: The lenge of array
  * @cmp: Pointer to a function
  * Return: An integer
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret;

	ret = 0;
	for (i = 0; i < size; i++)
	{
		ret += (cmp(array[i]));
	}


	return (ret);
}

#include "main.h"

/**
  * alloc_grid - returns pointer to a 2d array
  * @width: width of the array
  * @height: Height of the array
  * Return: Pointer to the 2D array
*/

int **alloc_grid(int width, int height)
{
	int **array, i;

	array = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
	}

	return (array);
}

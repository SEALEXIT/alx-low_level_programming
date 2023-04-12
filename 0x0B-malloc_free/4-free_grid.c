#include "main.h"

/**
  * free_grid - frees memory alocated to 2D array
  * @grid: 2D array
  * @height: height of the array
  * Return: Nothing
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

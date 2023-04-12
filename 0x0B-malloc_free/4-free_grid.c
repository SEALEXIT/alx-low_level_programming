#include "main.h"

/**
  * free_grid - frees memory alocated to 2D array
  * @grid: 2D array
  * @height: height of the array
  * Return: Nothing
  */

void free_grid(int **grid, int height)
{
	grid = (int **)malloc(height * sizeof(int *));

	free(grid);

}

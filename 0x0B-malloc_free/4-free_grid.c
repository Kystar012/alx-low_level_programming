#include "main.h"
#include <stdlib.h>
/**
  *free_grid-frees the 2D created by alloc_grid
  *@grid:grid to free
  *@height:height of the grid
  *
  *Return:nothing
  */
void free_grid(int **grid, int height)
{
	int l;

	if (grid == NULL || height == 0)
		return;
	for (l = 0; l < height; l++)
		free(grid[l]);
	free(grid);
}

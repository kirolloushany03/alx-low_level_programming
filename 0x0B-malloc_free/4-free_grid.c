#include "mainB.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid
 * @grid: pointer to the grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
		return;

	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

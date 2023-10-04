#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid
 * @grid: Pointer to the 2D grid to be freed
 * @height: The height of the grid
 */
void free_grid(int **grid, int height)
{
	int m;

	if  (grid == NULL || height <= 0)
	{
		return;
	}
	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}

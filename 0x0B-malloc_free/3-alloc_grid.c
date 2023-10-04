#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocate a 2D grid of integers and initialize to 0
 * @width: The width of the grid
 * @height: The height of the grid
 * Return:A pointer to allocated 2D grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int j, m;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridout = (int **)malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		gridout[j] = malloc(width * sizeof(int));
		if (gridout[j] == NULL)
		{
			for (j--; j >= 0; j--)
			free(gridout[j]);
			free(gridout);
			return (0);
		}
	}
	for (j = 0; j < height; j++)
		for (m = 0; m < width; m++)
			gridout[j][m] = 0;
	return (gridout);
}

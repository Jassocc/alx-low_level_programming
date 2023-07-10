#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid previously created
 * @grid: pointer to array
 * @height: column
 */

void free_grid(int **grid, int height)
{
	int array;

	if (grid == NULL)
	{
		return;
	}
	for (array = 0; array < height; array++)
	{
		free(grid[array]);
	}
	free(grid);
	grid = NULL;
}

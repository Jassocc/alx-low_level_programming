#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: column
 * @height: row
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
int **g;
int a, b;

if (height <= 0 || width <= 0)
{
	return (NULL);
}
g = (int **) malloc(height * sizeof(int *));

	if (g == NULL)
{
	return (NULL);
}
for (a = 0; a < height; a++)
{
	g[a] = (int *) malloc(width * sizeof(int));
	if (g[a] == NULL)
	{
		for (a = 0; a < height; a++)
			free(g[a]);
		free(g);

		return (NULL);
	}
	for (b = 0; b < width; b++)
	{
		g[a][b] = 0;
	}
}

return (g);
}

#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: start
 * @max: end
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int a, size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		array[a] = min;
		min++;
	}
	return (array);
}

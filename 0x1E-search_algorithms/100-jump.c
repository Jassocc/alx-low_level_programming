#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search -  searches for a value in a sorted array of integers
 * @array: pointer to the first element
 * @value: value to search for
 * @size:  number of elements in array
 * Return:  return the first index
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0, current = 0, a;

	if (array == NULL)
	{
		return (-1);
	}
	while (current < size && array[current] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", current, array[current]);
		prev = current;
		current += step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, current);
	for (a = prev; a <= current && a < size; a++)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
		{
			return (a);
		}
	}
	return (-1);
}

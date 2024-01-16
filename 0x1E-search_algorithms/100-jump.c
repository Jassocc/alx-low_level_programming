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
	size_t prev = 0, current, start, end, a;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (array[prev] < value)
	{
		current = prev + step;
		if (current >= size)
		{
			current = size - 1;
		}
		if (prev != current)
		{
			printf("Value checked array[%lu] = [%d]\n", current, array[current]);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		}
		if (array[current] >= value)
		{
			break;
		}
		prev += step;
	}
	start = prev;
	end = prev + step;
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	for (a = start; a <= end && a < size; a++)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
		{
			return (a);
		}
	}
	return (-1);
}

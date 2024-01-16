#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element
 * @size: number of elements
 * @value: value to search for
 * Return: first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos = 0, offset;
	double slope;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (low <= high)
	{
		slope = (double)(high - low) / (array[high] - array[low]);
		offset = (size_t)(slope * (value - array[low]));
		pos = low + offset;
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		if (array[pos] < value)
		{
		low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
	/**
	 * if (pos >= size)
	 *{
	 *	printf("Value checked array[%lu] is out of range\n", pos);
	 *	return (-1);
	 * }
	 */
	return (-1);
}

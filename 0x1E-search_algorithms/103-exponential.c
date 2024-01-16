#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element
 * @low: starting point of index
 * @high: ending point of index
 * @value: value to search for
 * Return: index where value is located
 */
int binnary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, a;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: %d", array[low]);
		for (a = low + 1; a <= high; a++)
		{
			printf(", %d", array[a]);
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
/**
 * exponential_search - searches for a value in a sorted array
 * @array: pointer to the first element
 * @size: number of elements
 * @value: value to search for
 * Return: return the first index
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low, high;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	low = bound / 2;
	high = (bound < size - 1) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binnary_search(array, low, high, value));
}

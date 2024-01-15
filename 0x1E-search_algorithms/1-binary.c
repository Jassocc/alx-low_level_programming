#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element
 * @value: value to search for
 * @size: number of elements
 * Return: Reyturn the value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;
	size_t a;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		for (a = left; a <= right; a++)
		{
			if (a == right)
			{
				printf("%d", array[a]);
			}
			else
			{
				printf("%d, ", array[a]);
			}
		}
		printf("\n");
		mid = (left + right) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}

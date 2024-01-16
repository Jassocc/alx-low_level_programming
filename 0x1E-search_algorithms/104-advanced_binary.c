#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - prints the array of elements
 * @array: pointer to array
 * @start: start index
 * @end: ending index
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t a;

	printf("Searching in array: %d", array[start]);
	for (a = start + 1; a <= end; a++)
	{
		printf(", %d", array[a]);
	}
	printf("\n");
}
/**
 * advanced_binary_recursive - Recursively searches for value
 * @array: pointer to first element
 * @low: starting point
 * @high: ending point
 * @value: value in array
 * Return: Index value
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
	{
		return (-1);
	}
	print_array(array, low, high);
	mid = (low + high) / 2;
	if (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
		{
			return (advanced_binary_recursive(array, low, mid, value));
		}
		return (mid);
	}
	if (array[mid] < value)
	{
		return (advanced_binary_recursive(array, mid + 1, high, value));
	}
	return (advanced_binary_recursive(array, low, mid - 1, value));
}
/**
 * advanced_binary - searches for a value in a sorted array
 * @array:  pointer to the first element
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	return (advanced_binary_recursive(array, 0, size - 1, value));
}

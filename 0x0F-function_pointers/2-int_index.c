#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @cmp:  pointer to the function
 * @array: array
 * Return: index where integer is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		{
			return (a);
		}
	}
	return (-1);
}

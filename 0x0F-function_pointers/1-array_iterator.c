#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator -  executes a function on each element of an array
 * @size: size of array
 * @action - a pointer to the function
 * @array: array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t a;

	for (a = 0; a < size; a++)
	{
		action(*(array + a));
	}
}

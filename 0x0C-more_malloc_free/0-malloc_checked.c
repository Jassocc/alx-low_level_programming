#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Returns a pointer to the allocated memory
 * @b: size
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);
}

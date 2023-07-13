#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: Previous size
 * @new_size: size to reallocate
 * Return: pointer to new wsize
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a, min;
	void *new_pointer;
	char *old_pointer, *char_ptr;

	if (ptr == NULL)
	{
		new_pointer = malloc(new_size);
		if (new_pointer == NULL)
		{
			return (NULL);
		}
		else
			return (new_pointer);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	new_pointer = malloc(new_size);
	if (new_pointer == NULL)
		return (NULL);
	old_pointer = (char *)ptr;
	char_ptr = (char *)new_pointer;
	if (old_size < new_size)
	{
		min = old_size;
	}
	else
	{
		min = new_size;
	}
	for (a = 0; a < min; a++)
	{
		char_ptr[a] = old_pointer[a];
	}
	free(ptr);
	return (new_pointer);
}

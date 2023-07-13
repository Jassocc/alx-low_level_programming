#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: size
 * @size: sizeof datatype
 * Return: pointer to string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int a, tot = nmemb * size;
	char *ptr2;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr2 = (char *)ptr;
	for (a = 0; a < tot; a++)
	{
		ptr2[a] = 0;
	}

	return (ptr);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: fill with values
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int a;
if (size <= 0)
{
	return (NULL);
}
array = malloc(size * sizeof(char));

if (array == NULL)
{
	return (NULL);
}
for (a = 0; a < size; a++)
{
	*(array + a) = c;
}
return (array);
}

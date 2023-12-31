#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: num
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;
	unsigned long int m = (1 << index);

	b = (sizeof(unsigned long int) * 8);
	if (index >= b)
	{
		return (-1);
	}
	*n = (*n | m);
	return (1);
}

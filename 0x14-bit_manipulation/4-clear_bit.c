#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0
 * @n: num
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b = (sizeof(unsigned long int) * 8);

	if (index >= b)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}

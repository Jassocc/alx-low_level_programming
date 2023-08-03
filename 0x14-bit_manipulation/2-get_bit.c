#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: num
 * @index: the index
 * Return: the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;
	unsigned int maximum;

	maximum = (sizeof(n) * 8);
	if (index >= maximum)
	{
		return (-1);
	}
	b = ((n >> index) & 1);
	return (b);
}

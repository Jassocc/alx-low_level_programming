#include "main.h"

/**
 * flip_bits -  bits you would need to flip to get from one number to another
 * @n: number
 * @m: bits to flip
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		counter = counter + (xor & 1);
		xor >>= 1;
	}
	return (counter);
}

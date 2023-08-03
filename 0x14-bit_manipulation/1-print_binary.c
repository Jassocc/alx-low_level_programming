#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: bin of num
 */
void print_binary(unsigned long int n)
{
	int length;
	int start = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (length = sizeof(n) * 8 - 1; length >= 0; length--)
	{
		if ((n >> length) & 1)
		{
			_putchar('1');
			start = 1;
		}
		else if (start)
		{
			_putchar('0');
		}
	}
}

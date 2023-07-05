#include "main.h"

/**
 * _pow_recursion - return value raised by the power of
 * @x: integer
 * @y: power to raise to
 * Return: value of power raised
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (x == 1)
	{
		return (1);
	}
}

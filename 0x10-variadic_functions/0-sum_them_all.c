#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: integers
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int s = 0, a;

	if (n == 0)
	{
		return (0);
	}
	va_start(val, n);

	for (a = 0; a < n; a++)
	{
		s = s + va_arg(val, int);
	}
	va_end(val);

	return (s);
}

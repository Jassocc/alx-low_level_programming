#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n:  number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vnum;
	unsigned int a = 0;

	if (n >= 1)
	{
		va_start(vnum, n);
		for (; a < n; a++)
		{
			printf("%d", va_arg(vnum, int));

			if (a != n && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(vnum);
	}
	printf("\n");
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n:  number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vs;
	unsigned int a = 0;
	char *string;

	if (n >= 1)
	{
		va_start(vs, n);
		for (; a < n; a++)
		{
			string = va_arg(vs, char *);
			if (string == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", string);
			}
			if (a != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(vs);
	}
	printf("\n");
}

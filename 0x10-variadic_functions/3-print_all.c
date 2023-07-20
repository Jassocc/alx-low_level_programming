#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format:  list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *separ = "";

	va_list ar;

	va_start(ar, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
				printf("%s%c", separ, va_arg(ar, int);
					break;
				case 'i':
				printf("%s%d", separ, va_arg(ar, int);
					break;
				case 'f':
				printf("%s%f", separ, va_args(ar, double);
					break;
				case 's':
				string = va_arg(ar, char *);
				if (!string)
				string = "(nil)";
				printf("%s%s", separ, string);
				break;
				default:
				i++;
				continue;
			}
			separ = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ar);
}

#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - fucntion that prints a name
 * @name: name to be printed
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}

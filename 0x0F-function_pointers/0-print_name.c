#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -  prints a name
 * @name: Name nedded to be printed
 * @f: function to be executed
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

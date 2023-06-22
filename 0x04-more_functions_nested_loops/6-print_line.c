#include "main.h"

/**
 * print_line - n is the number of times the character _ should be printed
 * @n: character number that should be printed
 */

void print_line(int n)
{
int line = n;

for (line = n; line > '0'; line--)
{
_putchar('_');
}
_putchar('\n');
}

#include "main.h"

/**
 * print_line - n is the number of times the character _ should be printed
 * @n: character number that should be printed
 */

void print_line(int n)
{
int line;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (line = 1; line <= n; line++)
{
_putchar('_');
}
_putchar('\n');
}
}

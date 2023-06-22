#include "main.h"

/**
 * print_diagonal - print character \ n times
 * @n:number of characters
 */

void print_diagonal(int n)
{
int space, line;

if (n > 0)
{
for (line = 1; line <= n; line++)
{
for (space = 1; space < line; space++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}

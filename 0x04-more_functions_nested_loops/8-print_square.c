#include "main.h"

/**
 * print_square - print a square of a given size
 * @size: the size for the square
 */

void print_square(int size)
{
int horizon, vertical;

if (size > 0)
{
for (horizon = 1; horizon >= size; horizon++)
{
for (vertical = 1; vertical >= size; vertical++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}

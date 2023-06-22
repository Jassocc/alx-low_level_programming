#include "main.h"

/**
 * print_triangle - print triangles using # in given size
 * @size: size of triangle
 */

void print_triangle(int size)
{
int height, width, length;

if (size <= 0)
{
_putchar('\n');
}
for (height = 1; height <= size; height++)
{
for (width = 1; width <= (size - height); width++)
_putchar(' ');

for (length = 1; length <= height; length++)
_puthcar('#');

_putchar('\n');
}
}

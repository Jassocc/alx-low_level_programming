#include "main.h"

/**
 * print_number -  function that prints an integer
 * @n: number to be printed
 */

void print_number(int n)
{
unsigned int a1;
a1 = n;

if (n < 0)
{
_putchar('-');
a1 = -n;
}
if (a1 / 10 != 0)
{
print_number(a1 / 10);
}
_putchar((a1 % 10) + '0');
}

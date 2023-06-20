#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: integer
 */

void print_times_table(int n)
{
int rows, columns, result;

if (n >= 0 && n <= 15)
{
for (rows = 0; rows <= n; rows++)
{
for (columns = 0; columns <= n; columns++)
{
result = (rows * columns);
if (column == 0)
{
_putchar('0' + result);
else
{
_putchar(',');
_putchar(' ');
if (result < 10)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + result);
}
else if (result > 9 && result < 100)
{
_putchar(' ');
_putchar('0' + (result / 10));
_putchar('0' + (result % 10));
}
else if (result >= 100)
{
_putchar('0' + (result / 100));
_putchar('0' + ((result / 10) % 10));
_putchar('0' + (result % 10));
}
}
}
}
_putchar('\n');
}
}
}

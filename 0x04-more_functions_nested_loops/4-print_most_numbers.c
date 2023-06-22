#include "main.h"

/**
 *  print_most_numbers - prints the numbers, from 0 to 9 skip 2 and 4
 */

void print_most_numbers(void)
{
int (numerical);

for (numerical = '0'; numerical <= '9'; numerical++)
{
if (numerical != '2' && numerical != '4')
{
_putchar(numerical);
}
}
_putchar('\n');
}

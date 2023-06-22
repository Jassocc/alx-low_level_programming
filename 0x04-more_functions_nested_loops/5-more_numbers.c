#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
int numerical;
int lines;

for (lines = 1; lines <= 10; lines++)
{
for (numerical = 0; numerical <= 14; numerical++)
{
if (numerical >= 10)
_putchar((numerical / 10) + '0');
_putchar((numerical % 10) + '0');
}
_putchar('\n');
}
}

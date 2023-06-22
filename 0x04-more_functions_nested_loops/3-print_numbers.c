#include "main.h"

/**
 * print_numbers - print 0 - 9
 */

void print_numbers(void)
{
char numerical;
for (numerical = '0'; numerical <= 9; numerical++)
{
_putchar(numerical);
}
_putchar('\n');
}

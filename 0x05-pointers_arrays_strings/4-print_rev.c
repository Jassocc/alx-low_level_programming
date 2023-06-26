#include "main.h"

/**
 * print_rev - print string in rerverse
 * @s: the string
 */

void print_rev(char *s)
{
int length = 0;
int rev;

while (*s != '\0')
{
length++;
s++;
}
for (rev = length - 1; rev >= 0; rev--)
{
s--;
_putchar(*s);
}
_putchar('\n');
}

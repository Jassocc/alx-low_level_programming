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
++s;
}
for (rev = length; rev >= 0; rev--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}

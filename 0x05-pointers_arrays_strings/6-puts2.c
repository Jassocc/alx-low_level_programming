#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to print
 */

void puts2(char *str)
{
int lan = 0;

while (str[lan] != '\0')
{
if (lan % 2 == 0)
{
_puthcar(str[lan]);
}
lan++;
}
_putchar('\n');
}

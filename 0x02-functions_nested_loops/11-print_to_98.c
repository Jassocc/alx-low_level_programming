#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers to 98
 *@n: integer
 */

void print_to_98(int n)
{
while (n < 99)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
while (n == 0)
{
printf("%d", n);
}
printf("\n");
}

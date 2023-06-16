#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int alpha;
int beta;

for (alpha = 0; alpha < 100; alpha++)
{
for (beta = alpha + 1; beta < 100; beta++)
{
putchar((alpha / 10) + '0');
putchar((alpha % 10) + '0');
putchar(' ');
putchar((beta / 10) + '0');
putchar((beta % 10) + '0');

if (alpha != 98 || beta != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}

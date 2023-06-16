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
int epsilon;

for (alpha = 0 ; alpha < 8; alpha++)
{
for (beta = alpha + 1; beta < 9; beta++)
{
for (epsilon = beta + 1; epsilon < 10; epsilon++)
{
putchar(alpha + '0');
putchar(beta + '0');
putchar(epsilon + '0');

if (alpha != 7 || beta != 8 || epsilon != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}

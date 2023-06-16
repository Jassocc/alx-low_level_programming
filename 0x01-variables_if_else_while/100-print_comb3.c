#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ab;
int cd;

for (ab = 0; ab < 9; ab++)
{
for (cd = ab + 1; cd < 10; cd++)
{
putchar(ab + '0');
putchar(cd + '0');

if (ab != 8 || cd != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}

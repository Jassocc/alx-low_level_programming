#include <stdio.h>

/**
 *main - print largest prime factor
 *Return: 0
 */

int main(void)
{

unsigned long number = 612852475143;
unsigned long divider = 2;

while (divider < num)
{
if (num % divider == 0)
{
num /= divider;
divider = 2;
}
else
{
divider++;
}
}
printf("%lu\n", num);

return (0);
}

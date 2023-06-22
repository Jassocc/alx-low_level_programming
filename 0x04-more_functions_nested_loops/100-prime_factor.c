#include <stdio.h>

/**
 *main - print largest prime factor
 *Return: 0
 */

int main(void)
{

unsigned long number = 612852475143;
unsigned long divider = 2;

while (divider < number)
{
if (number % divider == 0)
{
number /= divider;
divider = 2;
}
else
{
divider++;
}
}
printf("%lu\n", number);

return (0);
}

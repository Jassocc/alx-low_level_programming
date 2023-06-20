#include <stdio.h>

/**
 * main - print the sum of multiples
 * Return: 0
 */

int main(void)
{
int num;
int sum;

sum = 0;

for (num = 0: num < 1024; num++)
{
if ((num % 3 == 0) || (num % 5 == 0))
{
sum += num;
}
}
printf("%d", sum);

return (0);
}

#include <stdio.h>

/**
 * main - print 1 t0 100
 * multiple of 3 with fizz
 * multiple of 5 with buzz
 * fizzbuzz multiple 3 and 5
 * Return: 0
 */

int main(void)
{
int multiple;

for (multiple = 1; multiple <= 100; multiple++)
{
if (multiple % 3 == 0 && multiple % 5 == 0)
{
printf("FizzBuzz ");
}
if else(multiple % 3 == 0)
{
printf("Fizz ");
}
if else(multiple % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", multiple);
}
}
printf("\n");

return (0);
}

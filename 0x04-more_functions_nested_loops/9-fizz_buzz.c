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
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i ==1)
{
printf("%d", i);
}
else
{
printf("%d ", i);
}
}
printf("\n");

return (0);
}

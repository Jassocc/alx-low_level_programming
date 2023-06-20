#include <stdio.h>

/**
 * main - 50 first fibonachi numbers
 * Return: 0
 */

int main(void)
{
int counter;
long int num1 = 1;
long int num2 = 2;
long int latter;

printf("%lu, %lu", num1, num2);

for (counter = 3; counter <= 50; counter++)
{
latter = num1 + num2;
printf(", %lu", latter);

num1 = num2;
num2 = latter;
}
printf("\n");

return (0);
}

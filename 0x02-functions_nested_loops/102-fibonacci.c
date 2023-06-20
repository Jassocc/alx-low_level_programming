#include <stdio.h>

/**
 * main - 50 first fibonachi numbers
 * Return: 0
 */

int main(void)
{
long int num1 = 1;
long int num2 = 2;
long int counter = num1 + num2;

printf("%lu, ", num1);
printf("%lu, ", num2);

while (counter <= 50)
if (counter == 50)
{
printf("%lu \n", counter);
}
else
{
printf("%lu, ", counter);
}

num1 = num2;
num2 = counter;

counter = num1 + num2;
counter++;

return (0);
}

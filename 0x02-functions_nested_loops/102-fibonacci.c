#include <stdio.h>

/**
 * main - 50 first fibonachi numbers
 * Return: 0
 */

int main(void)
{
int counter = 3;
long int num1 = 1;
long int num2 = 2;
long int latter = num1 + num2;

printf("%lu, ", num1);
printf("%lu, ", num2);

while (counter <= 50)
if (counter == 50)
{
printf("%lu \n", latter);
}
else
{
printf("%lu, ", latter);
}

num1 = num2;
num2 = latter;

latter = num1 + num2;
counter++;

return (0);
}

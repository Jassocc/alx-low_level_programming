#include <stdio.h>

/**
 * main -  prints the sum of the even-valued terms, followed by a new line.
 *Return: 0
 */

int main(void)
{
int previous;
int current;
int sum;
int next;

while (current <= 4000000)
{
if (current % 2 == 0)
{
sum += current;
}
next = previous + current;
previous = current;
current = next;
}
printf("%d\n", sum);

return (0);
}

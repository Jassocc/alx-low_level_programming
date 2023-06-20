#include <stdio.h>

/**
 * main - finds and prints the first 98
 * Return: 0
 */

int main(void)
{
int previous = 1;
int current = 2;
int count = 2;
int next;

printf("%d, %d, ", previous, current);

while (count <= 98)
{
next = previous + current;
printf("%d, ", next);

previous = current;
current = next;
count++;
}
printf("\n");

return (0);
}

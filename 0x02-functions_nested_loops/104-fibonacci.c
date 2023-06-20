#include <stdio.h>

/**
 * main - finds and prints the first 98
 * Return: 0
 */

int main(void)
{
unsigned long previous = 1;
unsigned long current = 2;
unsigned long count = 0;
int next;

printf("%ld, %ld, ", previous, current);

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

#include "main.h"
#include <stdio.h>
/**
 * print_buffer -  prints a buffer.
 * @b: pointer to size
 * @size:  content to be printed
 * Return: 0 if success
 */

void print_buffer(char *b, int size)
{
int a, c;

for (a = 0; a < size; a += 10)
{
printf("%08x: ", a);

for (c = 0; c < 10; c++)
{
if ((c + a) >= size)
printf("  ");
else
printf("%02x", *(b + c + a));

if ((c % 2) != 0 && c != 0)
printf(" ");
}
for (c = 0; c < 10; c++)
{
if ((c + a) >= size)
break;

else if (*(b + c + a) >= 31 && *(b + c + a) <= 126)
printf("%c", *(b + c + a));
else
printf(".");
}
if (a >= size)
continue;
printf("\n");
}
if (size <= 0)
printf("\n");
}

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
if (size <= 0)
{
printf("\n");
return;
}
for (a = 0; a < size; a += 10)
{
printf("%08x: ", a);
for (c = a; c < a + 10; c++)
{
if (c < size)
printf("%02x", (unsigned char)b[c]);
else
printf(" ");
if (c % 2 != 0)
printf(" ");
}
printf(" ");
for (c = a; c < a +10; c++)
{
if (c < size)
{
if (b[c] >= 32 && b[c] <= 126)
printf("%c", b[c]);
else
printf(".");
}
else
{
printf(" ");
}
}
printf("\n");
}
}

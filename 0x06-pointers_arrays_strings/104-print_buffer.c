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
}
for (a = 0; a < size; a += 10)
{
printf("%08x: ", a);
for (c = 0; c < 10; c++)
{
if (a + c < size)
printf("%02x", (unsigned char)b[a + c]);
else
printf(" ");
if (c % 2 == 1)
printf(" ");
}
for (c = 0; c < + 10; c++)
{
if (a + c < size)
{
if (b[a + c] >= 32 && b[a + c] <= 126)
printf("%c", b[a + c]);
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

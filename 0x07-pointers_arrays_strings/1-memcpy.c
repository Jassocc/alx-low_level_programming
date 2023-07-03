#include "main.h"

/**
 * _memcpy -  copies memory area.
 * @n: copies n bytes
 * @dest: copies to memory area
 * @src: copies from memory area
 * Return: Memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = n;
int i;

if (a > 0)
{
for (i = 0; i < a; i++)
dest[i] = src[i];
}
return (dest);
}

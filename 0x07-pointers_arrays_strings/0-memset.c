#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @n: fills the first n bytes
 * @s: Pointer to memory
 * @b: constant byte
 * Return: Memory
 */

char *_memset(char *s, char b, unsigned int n)
{
int si = n;
int i;

if (si > 0)
{
for (i = 0; i < si; i++)
s[i] = b;
}
return (s);
}

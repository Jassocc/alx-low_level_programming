#include "main.h"

/**
 * _strncat - add n bytes to string
 * @dest: string to gett add on
 * @src: string to add
 * @n: number of bytes to add
 * Return: added string
 */

char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;

while (dest[a] != '\0')
{
a++;
}
while (src[b] != src[n])
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';

return (dest);
}

#include "main.h"

/**
 * _strncpy - copies n amount of string
 * @dest: string to be copied
 * @src: string that gets overwritten
 * @n: amount of characters to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
int a;

for (a = 0; a < n && src[a] != '\0'; a++)
{
dest[a] = src[a];
}
while (a < n)
{
dest[a] = '\0';
a++;
}

return (dest);
}

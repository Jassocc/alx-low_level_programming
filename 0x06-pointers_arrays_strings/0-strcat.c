#include "main.h"

/**
 * _strcat - add 2 strings together
 * @dest: string
 * @src: string to be added
 * Return: added string
 */

char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;

while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
a++;
b++;
}
dest[a] = '\0';

return (dest);
}

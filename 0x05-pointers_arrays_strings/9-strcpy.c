#include "main.h"

/**
 * _strcpy - copies the string pointed
 * @dest: copy to this
 * @src: be copied
 * Return: copy of original
 */

char *_strcpy(char *dest, char *src)
{
int j;

while (src[j] != '\0')
{
dest[j] = src[j];
j++;
}
dest[j] = '\0';

return (dest);
}

#include "main.h"

/**
 * _strlen - return the length of string
 * @s: string
 * Return: return the length
 */

int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}

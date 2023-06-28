#include "main.h"

/**
 * string_toupper - change lower case to uppercase
 * @s: string
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
int str = 0;

while (s[str] != '\0')
{
if (s[str] >= 'a' && s[str] <= 'z')
{
s[str] = s[str] - 32;
}
str++;
}
return (s);
}

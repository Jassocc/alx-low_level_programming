#include "main.h"
#define NULL 0
/**
 * _strchr -  locates a character in a string
 * @s: the string
 * @c: Target
 * Return:  a pointer to the first character
 */

char *_strchr(char *s, char c)
{
int a = 0;

while (s[a] != '\0')
{
	if (s[a] == c)
	{
		return (&s[a]);
	}
	a++;
}
if (c == '\0')
{
	return (&s[a]);
}
else
return (NULL);
}

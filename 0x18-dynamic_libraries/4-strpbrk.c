#include "main.h"
#define NULL 0

/**
 * _strpbrk -  locates the first occurrence in the string
 * @s: the string
 * @accept: target match
 * Return: Returns a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;

	while (s[a] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				s = &s[a];
				return (s);
			}
		}
		a++;
	}
	return (NULL);
}

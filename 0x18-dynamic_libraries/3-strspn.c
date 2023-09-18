#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring.
 * @s: initial segment/string
 * @accept: target matches
 * Return: the number of bytes matched from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b;
	int match = 0;

	while (s[a] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				match++;
				break;
			}
			if (accept[b + 1] == '\0' && s[a] != accept[b])
				return (match);
		}
		a++;
	}
	return (match);
}

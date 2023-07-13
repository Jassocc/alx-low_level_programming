#include "main.h"
#include <stdlib.h>

/**
 * _strlen - checks lenjgth of string
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

		return (len);
}

/**
 * string_nconcat -  concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to concatenate from string
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0, length2 = 0, a, b;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	if (n >= length2)
	{
		n = length2;
	}

	ptr = malloc(sizeof(*ptr) * (length1 + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < length1; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = 0; b < n; b++)
	{
		ptr[a + b] = s2[b];
	}
	ptr[a + b] = '\0';

	return (ptr);
}

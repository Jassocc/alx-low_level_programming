#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to string
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int length_1 = 0, length_2 = 0, a, b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length_1] != '\0')
	{
		length_1++;
	}
	while (s2[length_2] != '\0')
	{
		length_2++;
	}
	result = malloc((length_1 + length_2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < length_1; a++)
	{
		result[a] = s1[a];
	}
	for (b = 0; b < length_2; b++)
	{
		result[a + b] = s2[b];
	}
	result[a + b] = '\0';

	return (result);
}

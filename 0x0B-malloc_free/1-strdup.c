#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to duplicate
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	int a, len = 0;
	char *duplication;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	duplication = malloc((len + 1) * sizeof(char));

	if (duplication == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= len; a++)
	{
		duplication[a] = str[a];
	}
	return (duplication);
}

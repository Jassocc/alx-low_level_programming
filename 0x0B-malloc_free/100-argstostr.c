#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - checks length of string
 * @str: string
 * Return: length
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * argstostr - concatenates all the arguments
 * @ac: argc
 * @av: arguments
 * Return: Pointer
 */

char *argstostr(int ac, char **av)
{
	int tot_len = 0, ind = 0, len = 0;
	int a, b;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		tot_len = tot_len + _strlen(av[a]) + 1;
	}
	result = malloc((tot_len + 1) * sizeof(char *));

	if (result == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		len = _strlen(av[a]);
		for (b = 0; b < len; b++)
		{
			result[ind++] = av[a][b];
		}
		result[ind++] = '\n';
	}
	result[tot_len] = '\0';

	return (result);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - check length
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
 * _strdup - duplicates string
 * @str: string to duplicate
 * Return: Null
 */

char *_strdup(char *str)
{
	int len, a;
	char *duplication;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);
	duplication = malloc((len + 1) * sizeof(char));

	if (duplication == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < len; a++)
	{
		duplication[a] = str[a];
	}
	duplication[len] = '\0';

	return (duplication);
}

/**
 * word_counter - count amount of words
 * @str: string to count
 * Return: count
 */

int word_counter(char *str)
{
	int counter = 0, words = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			words = 0;
		}
		else if (words == 0)
		{
			words = 1;
			counter++;
		}
		str++;
	}

		return (counter);
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: words that were split
 */

char **strtow(char *str)
{
	int word;
	int ind = 0,

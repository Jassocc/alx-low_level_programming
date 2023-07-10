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
	int length = 0, index = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		length++;
		index++;
	}

	return (length);
}
/**
 * word_counter - count amount of words
 * @str: string to count
 * Return: count
 */

int word_counter(char *str)
{
	int counter = 0, words = 0, len = 0;

	for (counter = 0; *(str + counter); counter++)
	{
		len++;
	}
	for (counter = 0; counter < len; counter++)
	{
		if (*(str + counter) != ' ')
		{
			words++;
			counter = counter + _strlen(str + counter);
		}
	}

		return (words);
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: words that were split
 */

char **strtow(char *str)
{
	char **word;
	int ind = 0, a, b, let, wording;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	wording = word_counter(str);
	if (wording == 0)
	{
		return (NULL);
	}
	word = malloc(sizeof(char *) * (wording + 1));
		if (word == NULL)
		{
			return (NULL);
		}
		for (a = 0; a < wording; a++)
		{
			while (str[ind] == ' ')
			{
				ind++;
			}
			let = _strlen(str + ind);
			word[a] = malloc(sizeof(char) * (let + 1));
			if (word[a] == NULL)
			{
				for (; a >= 0; a--)
					free(word[a]);
				free(word);
				return (NULL);
			}
			for (b = 0; b < let; b++)
			{
				word[a][b] = str[ind++];
			}
				word[a][b] = '\0';
		}
		word[a] = NULL;
		return (word);
}

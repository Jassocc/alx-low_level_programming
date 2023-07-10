#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

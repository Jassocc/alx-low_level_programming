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
	int s1 = _strlen(s1)

#include "main.h"

/**
 * palindrome_compare - compare for matches
 * @s: string
 * @left: start from left
 * @right: start from right
 * Return: 1 if true, 0 if false
 */

int palindrome_compare(int left, int right, char *s)
{
	if (left > right)
	{
		return (1);
	}
	if (s[left] != s[right])
	{
		return (0);
	}
	return (palindrome_compare(left + 1, right - 1, s));
}
/**
 * _strlen - find length of string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}

	return (1 + _strlen(s + 1));
}
/**
 * is_palindrome - check if string palindrome
 * @s: string
 * Return: 1 if true, 0 if not
 */

int is_palindrome(char *s)
{
int length = _strlen(s);

if (length <= 1)
{
return (1);
}

return (palindrome_compare(0, length - 1, s));
}

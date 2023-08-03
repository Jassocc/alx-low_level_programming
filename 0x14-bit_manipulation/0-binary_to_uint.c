#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int s;

	l = 0;
	s = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[l] != '\0')
	{
		if ((b[l] != '0') && (b[l] != '1'))
		{
			return (0);
		}
		s = (s << 1) + (b[l] - '0');
		l++;
	}
	return (s);
}

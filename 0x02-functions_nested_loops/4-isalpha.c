#include "main.h"

/**
 *_isalpha - check if character is an alphabetical character
 *@c: character to be checked
 * Return: 1 if lowercase, 0 if uppercase
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}

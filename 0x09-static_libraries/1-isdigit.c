#include "main.h"

/**
 * _isdigit - checks for number from 0 to 9
 * @c: digit to be checked
 * Return: 1 if it is a digit between 0 - 9, 0 if it is not
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}

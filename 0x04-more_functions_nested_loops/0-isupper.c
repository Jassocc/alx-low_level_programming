#include "main.h"

/**
*_isupper - checks for uppercase
*@c: characters to be checked
*Return: 0 if lowercase, 1 if uppercase
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}

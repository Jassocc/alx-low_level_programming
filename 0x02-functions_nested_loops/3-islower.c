#include "main.h"

/**
*_islower - checks for lowercase
*@c: characters to be checked
*Return: 1 if lowercase, 0 if uppercase
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}

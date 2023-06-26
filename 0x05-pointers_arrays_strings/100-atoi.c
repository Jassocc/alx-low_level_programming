#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string that need to be converted
 * Return: integer
 */

int _atoi(char *s)
{
int result = 0;
int a = 1;
int b = 0;

if ( s[b] == '-')
{
a = -1;
b++;
}
else if (s[b] == '+')
{
b++;
}
while (s[b] >= '0' && s[b] <= '9')
{
if (result > (max / 10) || (result == (max / 10) && (s[b] - '0') > (max % 10)))
{

return ((sign == 1) ? max : min);
}
result = (result * 10) + (s[b] - '0');
b++;
}

return (result * a);
}0

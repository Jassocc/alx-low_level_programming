#include "main.h"
#include <limits.h>

/**
 * _atoi - convert string to integer
 * @s: string that need to be converted
 * Return: integer
 */

int _atoi(char *s)
{
int result = 0;
int sign = 1;
int a = 0;

if ( s[a] == '-')
{
sign = -1;
a++;
}
else if (s[a] == '+')
{
a++;
}
while (s[a] >= '0' && s[a] <= '9')
{
if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && (s[a] - '0') > (INT_MAX % 10)))
{

return ((sign == 1) ? INT_MAX : INT_MIN);
}
result = (result * 10) + (s[a] - '0');
a++;
}

return (result * sign);
}

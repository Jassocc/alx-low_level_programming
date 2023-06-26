#include "main.h"
#include <limits.h>
/**
* _atoi - convert to integer
* @s: string to be converted
* Return: integer
*/
int _atoi(char *s)
{
int r = 0;
int si = 1;
int a = 0;
if (s[a] == '-')
{
si = -1;
a++;
}
else if (s[a] == '+')
{
a++;
}
while (s[a] >= '0' && s[a] <= '9')
{
if (r > (INT_MAX / 10) || (r == (INT_MAX / 10) && (s[a] - '0') > (INT_MAX % 10)))
{
return ((si == 1) ? INT_MAX : INT_MIN);
}
r = (r * 10) + (s[a] - '0');
a++;
}

return (r * si);
}

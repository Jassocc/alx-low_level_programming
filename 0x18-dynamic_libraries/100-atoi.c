#include "main.h"
/**
* _atoi - convert to integer
* @s: string to be converted
* Return: integer
*/
int _atoi(char *s)
{
int r, a, c, len, f, digit;
r = 0;
a = 0;
c = 0;
len = 0;
f = 0;
digit = 0;

while (s[len] != '\0')
len++;

while (r < len && f == 0)
{
if (s[r] == '-')
++a;
if (s[r] >= '0' && s[r] <= '9')
{
digit = s[r] - '0';
if (a % 2)
digit = -digit;
c = c * 10 + digit;
f = 1;
if (s[r + 1] < '0' || s[r + 1] > '9')
break;
f = 0;
}
r++;
}
if (f == 0)
return (0);

return (c);
}

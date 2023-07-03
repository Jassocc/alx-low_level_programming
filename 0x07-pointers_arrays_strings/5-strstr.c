#include "main.h"
#define NULL 0

/**
 * _strstr -  finds the first occurrence of the substring
 * @needle: target substring to search for
 * @haystack: string to search
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
int a, x, y;
char *h = haystack;
char *n = needle;

a = 0;
if (n[0] == '\0')
	return (h);

while (h[a] != '\0')
{
if (h[a] == n[0])
{
y = a, x = 0;

while (n[x] != '\0')
{
if (h[y] == n[x])
{
y++;
x++;
}
else
break;
}
if (n[x] == '\0')
{
return (h + a);
}
}
a++;
}
return (NULL);
}

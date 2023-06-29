#include "main.h"

/**
 * infinite_add - function that adds two numbers.
 * @n1: number 1
 * @n2: number 2
 * @r: store result
 * @size_r: size of buffer
 * Return: pointer to string
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int a, b, c, i, j, d, s, left, right;
a = 0;
b = 0;
c = 0;
d = 0;

while (n1[a] != '\0')
a++;
while (n2[b] != '\0')
b++;
if (a + 2 > size_r || b + 2 > size_r)
return (0);
a--;
b--;
while (a >= 0 || b >= 0)
{
i = j = 0;
if (a >= 0)
i = n1[a--] - '0';
if (b >= 0)
j = n2[b--] - '0';
s = i + j + d;
d = s / 10;
r[c++] = (s % 10) + '0';
}
if (d)
r[c++] = d + '0';
r[c] = '\0';
left = 0;
right = c - 1;
while (left < right)
{
char tem = r[left];
r[left] = r[right];
r[right] = tem;
left++;
right--;
}
return (r);
}

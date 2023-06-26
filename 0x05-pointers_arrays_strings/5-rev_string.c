#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 */

void rev_string(char *s)
{
int length;
int start = 0;
int end = 0;

while (s[start] != '\0')
{
start++;
}
for (--start; start > end; start--)
{
length = s[start];
s[start] = s[end];
s[end] = length;
end++;
}
}

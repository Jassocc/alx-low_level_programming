#include "main.h"

/**
 * cap_string - fucntion to capatalize every word
 * @st: string to capatalise
 * Return: Pointer to changed string
 */

char *cap_string(char *st)
{
int i = 0;

while (st[i])
{
while (!(st[i] >= 'a' && st[i] <= 'z'))
i++;
if (st[i - 1] == ' ' || st[i - 1] == '\t' || st[i - 1] == '\n' ||
st[i - 1] == ',' || st[i - 1] == ';' || st[i - 1] == '.' ||
st[i - 1] == '"' || st[i - 1] == '?' || st[i - 1] == '!' ||
st[i - 1] == '(' || st[i - 1] == ')' || st[i - 1] == '{' ||
st[i - 1] == '}' || i == 0)
st[i] -= 32;
i++;
}
return (st);
}

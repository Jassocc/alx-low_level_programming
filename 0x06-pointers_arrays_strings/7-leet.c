#include "main.h"

/**
 * leet - change to 1337
 * @st: string to manipulate
 * Return: string
 */

char *leet(char *st)
{
char arrayA[11] = "aAeEoOtTlL";
char arrayB[11] = "4433007711";
int i, j;

for (i = 0; st[i] != '\0'; i++)
{
for (j = 0; arrayA[j] != '\0'; j++)
{
if (st[i] == arrayA[j])
{
st[i] = arrayB[j];
}
}
}
return (st);
}

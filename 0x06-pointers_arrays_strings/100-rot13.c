#include "main.h"

/**
 * rot13 -  encodes a string using rot13.
 * @st: string to encode
 * Return: encoded string
 */

char *rot13(char *st)
{
char alpha1[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char alpha2[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

int a, b;

for (a = 0; st[a] != '\0'; a++)
{
b = 0;

while (alpha1[b] != '\0' && st[a] != alpha1[b])
{
b++;
}
if (st[a] == alpha1[b])
{
st[a] = alpha2[b];
}
}

return (st);
}

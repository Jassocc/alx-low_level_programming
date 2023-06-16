#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ls;

for (ls = 0; ls < 10; ls++)
{
putchar(ls + '0');
}
for (ls = 0 ; ls < 6; ls++)
{
putchar(ls + 'a');
}
putchar('\n');

return (0);
}

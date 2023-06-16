#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ls;
int af;

for (ls = 0; ls < 10; ls++)
{
putchar(ls + '0');
}
for (af = 'a'; af <= 'f'; af++)
{
putchar(af + 'a');
}
putchar('\n');

return (0);
}

#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet x10 times, followed by a new line.
* Return void
*/

void print_alphabet_x10(void)
{
char alphabet;
int lines = 0;

while (lines < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
lines++;
}
}

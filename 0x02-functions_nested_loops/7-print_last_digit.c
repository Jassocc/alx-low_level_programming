#include "main.h"

/**
 *  print_last_digit - prints out the last digit of a given number
 *  @n: argument for integer
 *  Return: returns the last digit of a number
 */

int print_last_digit(int n)
{
int final;
final = n % 10

if (final < 0)
{
final = final * -1;
}
_putchar(final + '0');

return (final);
}

#include "main.h"

/**
 * prime - divide by higher divisor
 * @n: check if prime
 * @div: divisor
 * Return: 1 if prime, 0 if ot
 */

int prime(int n, int div)
{
	if (n % div == 0 || n < 2)
	{
		return (0);
	}
	if (div * div > n)
	{
		return (1);
	}
	return (prime(n, div + 1));
}
/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}

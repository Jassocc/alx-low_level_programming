#include "main.h"

/**
 * root_function - find square root of n
 * @n: number
 * @hsqrt: possible root of number
 * Return: square root
 */

int root_function(int n, int hsqrt)
{
	if (hsqrt * hsqrt == n)
	{
		return (hsqrt);
	}
	if (hsqrt * hsqrt > n)
	{
		return (-1);
	}
	return (root_function(n, hsqrt + 1));
}
/**
 * _sqrt_recursion - find square root of n
 * @n: number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (root_function(n, 0));
}

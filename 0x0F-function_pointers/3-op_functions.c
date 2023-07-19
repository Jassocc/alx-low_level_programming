#include "3-calc.h"

/**
 * op_add - adds two integeres together
 * @a: integer
 * @b: interger
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - minus two integers
 * @a: integer
 * @b: integer
 * Return:  the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: integer
 * @b:integer
 * Return:  the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: integer
 * @b: integer
 * Return:  the result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the remainder oif two integers
 * @a: integer
 * @b: integer
 * Return:  the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

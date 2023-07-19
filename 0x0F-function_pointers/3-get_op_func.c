#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - function that selects the correct operation
 * @s: mathmatical operators
 * Return: pointer to correct operator function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

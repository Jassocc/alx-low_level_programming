#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: counter
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int number1, number2;
	int (*f)(int, int);

	if (argv != 4)
	{
		printf("Error\n");
		exit (98);
	}
	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL || (f[1] != '\0'))
	{
		printf("Error\n");
		exit (99);
	}
	if ((f[0] == '/' || f[0] == '%') && number2[0] == '0')
	{
		printf("Error\n");
		exit (100);
	}
	printf("%d\n", f(number1, number2));

	return (0);
}

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * num - iterate through all argv
 * @argv2: an argv
 * Return: 0 if successfull
 */

bool num(char *argv2)
{
	int a = 0;

	while (argv2[a] != '\0')
	{
		if (!(argv2[a] >= '0' && argv2[a] <= '9'))
			return (0);
		a++;
	}

	return (1);
}
/**
 * main - add positive numbers
 * @argc: counter
 * @argv: number to add
 * Return: 0 if successfull
 */

int main(int argc, char *argv[])
{
	int b = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}
	while (b < argc)
	{
		if (num(argv[b]))
		{
			sum = sum + atoi(argv[b]);
		}
		else
		{
			printf("Error\n");

			return (1);
		}
		b++;
	}
	printf("%d\n", sum);

	return (0);
}

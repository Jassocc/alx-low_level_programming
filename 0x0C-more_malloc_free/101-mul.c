#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - multiply 2 positives
 * @argv: arguments passed
 * @argc: argument counter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned long multi;
	int index, digit;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (index = 1; index < argc; index++)
	{
		for (digit = 0; argv[index][digit] != '\0'; digit++)
		{
			if (argc[index][digit] > 57 || argv[index][digit] < 48)
			{
				printf("Error\n");
				exit (98);
			}
		}
	}
	multi = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", multi);

	return (0);
}

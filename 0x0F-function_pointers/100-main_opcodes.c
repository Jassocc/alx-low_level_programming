#include <stdio.h>
#include <stdlib.h>

/**
 * main - print own opcodes
 * @argc: counter
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int data, a = 0;

		if (argc != 2)
		{
			printf("Error\n");
			exit(1);
		}
	data = atoi(argv[1]);
	if (data < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (; a < data; a++)
	{
		printf("%02hhx", *((char *)main + a));

		if (a < data - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}

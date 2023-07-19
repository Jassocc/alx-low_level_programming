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
	unsigned char *array;

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
	array = (unsigned char *)main;

	for (; a < data; a++)
	{
		printf("%02hhx", array[a]);
	}
	return (0);
}

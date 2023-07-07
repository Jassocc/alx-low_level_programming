#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: counter
 * @argv: pointer to array
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}

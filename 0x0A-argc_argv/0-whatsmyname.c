#include <stdio.h>

/**
 * main - print name
 * @argc: counter
 * @argv: pointer
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - multiplies two numbers
 * @argc: counter
 * @argv: numbers to multiply
 * Return: 0 if successfull
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
	printf("Error\n");

	return (1);
}

printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}

#include <stdio.h>

/**
 * main -  number of arguments passed into it
 * @argc: counter
 * @argv: pointer to array
 * Return: 0 if successful
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

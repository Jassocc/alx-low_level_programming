#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generates and prints passwords
 * @argc: argc
 * @argv: array of pointers
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pass[7], *cod;
	int l = strlen(argv[1]), a, temp;

	cod = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	temp = (l ^ 59) & 63;
	pass[0] = cod[temp];
	temp = 0;
	for (a = 0; a < l; a++)
	{
		temp = temp + argv[1][a];
	}
	pass[1] = cod[(temp ^ 79) & 63];
	temp = 1;
	for (a = 0; a < l; a++)
	{
		temp = temp * argv[1][a];
	}
	pass[2] = cod[(temp ^ 85) & 63];
	temp = 0;
	for (a = 0; a < l; a++)
	{
		if (argv[1][a] > temp)
			temp = argv[1][a];
	}
	srand(temp ^ 14);
	pass[3] = cod[rand() & 63];
	temp = 0;
	for (a = 0; a < l; a++)
	{
		temp = temp + (argv[1][a] * argv[1][a]);
	}
	pass[4] = cod[(temp ^ 239) & 63];
	for (a = 0; a < argv[1][0]; a++)
	{
		temp = rand();
	}
	pass[5] = cod[(temp ^ 229) & 63];
	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}

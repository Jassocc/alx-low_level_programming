#include <stdio.h>
#include <stdlib.h>

/**
 * coin_Calculation - calculate amount of coins
 * @cents: cents to calculate
 * Return: amount of coins
 */

int coin_Calculation(int cents)
{
	int coins = 0;

	if (cents <= 0)

		return (0);

	coins = coins + cents / 25;
	cents %= 25;

	coins = coins + cents / 10;
	cents %= 10;

	coins = coins + cents / 5;
	cents %= 5;

	coins = coins + cents / 2;
	cents %= 2;

	coins = coins + cents;

	return (coins);
}
/**
 * main - calcualte coins
 * @argc: counter
 * @argv: arguments to count
 * Return: 0 if successfull
 */

int main(int argc, char *argv[])
{
	int cents;
	int minimalCoins;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	cents = atoi(argv[1]);
if (cents < 0)
{
	printf("0\n");
}
else
{
	minimalCoins = coin_Calculation(cents);
	printf("%d\n", minimalCoins);
}

return (0);
}

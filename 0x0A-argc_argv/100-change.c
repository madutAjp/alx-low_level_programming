#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that calculates the minimum number of coins for change
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 * Return: 0 when successful, 1 on error
 */
int main(int argc, char *argv[])
{
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coins) / sizeof(coins[0]);
	int count = 0;
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < numCoins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - A program that adds positive numbers
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 * Return: 0 when successful, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	bool hasError = false;
	int i;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			hasError = true;
		}
		else if (num < 0)
		{
			printf("Error\n");
			hasError = true;
		}
		else
		{
			sum += num;
		}
	}
	if (!hasError)
	{
		printf("%d\n", sum);
	}
	return (hasError ? 1 : 0);
}

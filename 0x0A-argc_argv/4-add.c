#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 * Return: 0 when successful, 1 on error
 */
int main(int argc, char *argv[])
{
	int m, k, add = 0;

	for (m = 1; m <  argc; m++)
	{
		for (k = 0; argv[m][k] != '\0'; k++)
		{
		if (!isdigit(argv[m][k]))
		{
		printf("Error\n");
		return (1);
		}
		}
		add += atoi(argv[m]);
	}
	printf("%d\n", add);
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc:The number of command - line arguments
 * @argv:An array containing the command - line arguments
 * Return:0 when successful
 */
int main(int argc __attribute__((unused)),
		char *argv[] __attribute__((unused)))
{
	int madut = argc - 1;

	printf("%d\n", madut);

	return (0);
}

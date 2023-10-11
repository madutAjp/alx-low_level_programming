#include <stdlib.h>
#include <stdio.h>
/**
 * print_opcodes - TO prints opcodes of the program
 * @y:Adress of the main function
 * @n:Number of bytes to print
 * Return:void
 */
void print_opcodes(char *y, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%.2hhx", y[x]);
		if (x < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - To prints its own opcodes
 * @argc:Number of arguments
 * @argv:array to arguments
 * Return:0 when successful
 */
int main(int argc, char **argv[])
{
	int j;

	if (argc != 2)
	{
		printf("error\n");
		exit(1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("error\n");
		exit(2);
	}
	print_opcodes((char *)&main, j);
	return (0);
}

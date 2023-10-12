#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * print_opcodes - TO prints opcodes of the program
 * @a:Address of the main function
 * @n:Number of bytes to print
 * Return:void
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
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
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}

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
int main(int argc, char *argv[])
{
	int j;
	int bytes;
	char *main_address = (char *)main;

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("error\n");
		return (2);
	}
	main_address = (char *)main;
	print_opcodes(main_address, bytes);
	return (0);
}

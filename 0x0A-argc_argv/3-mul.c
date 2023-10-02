#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc:Number of command line arguments
 * @argv:Array that containing the commands line arguments
 * Return:0 when successful
 */
int main(int argc, char *argv[])
{
	int numb1, numb2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[2]);
	result = numb1 * numb2;

	printf("%d\n", result);
	return (0);
}

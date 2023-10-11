#include <stdlib.h>
#include <stdio.h>

/**
 * main - To prints its own opcodes
 * @argc:Number of arguments
 * @argv:array to arguments
 * Return:0 when successful
 */
int main(int argc, char *argv[])
{
	int i;
	int bytes;
	char *arr;

	if (argc != 2)
	{
		printf("error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx", arr[i]);
	}
	return (0);
}

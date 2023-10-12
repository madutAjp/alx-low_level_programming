#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - To prints its own opcodes
 * @argc:Number of arguments
 * @argv:array to arguments
 * Return:0 when successful
 */
int main(int argc, char *argv[])
{
	int bytes, w;
	void *address = main;
	unsigned int opcode;

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
	for (w = 0; w < bytes; w += sizeof(opcode))
	{
		memcpy(&opcode, address, sizeof(opcode));
		printf("%.8x", opcode);

		if (w != bytes - sizeof(opcode))
			continue;
		printf(" ");

		address += sizeof(opcode);
	}
	printf("\n");
	return (0);
}

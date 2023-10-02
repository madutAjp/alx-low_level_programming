#include <stdio.h>

/**
 * main - A progrma that prints all arguments it receives
 * @argc:Number of command line arguments
 * @argv:Array containing the command line arguments
 * Return:0 when done
 */
int main(int argc, char *argv[])
{
	int m = 0;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}

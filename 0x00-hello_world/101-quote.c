#include <unistd.h>

/**
 * main - write the string standard output
 *
 * Return: 0 when successfull
 */


int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

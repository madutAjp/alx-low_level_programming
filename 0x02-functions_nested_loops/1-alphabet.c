#include "main.h"

/**
 * print_alphabet - program that prints the alphabet in lowercase
 *
 * Return:0 always when successful
 */
void print_alphabet(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
	{
	_putchar(v);
	}
	_putchar('\n');
	return (0);

}

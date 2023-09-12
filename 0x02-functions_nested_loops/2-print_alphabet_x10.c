#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return:0 when successful
 */
void print_alphabet_x10(void)
{
	int k;
	char m;

	while (k < 10)
	{
	for (m = 'a'; k <= 'z'; m++)
	{
	_putchar(m);
	}
	_putchar('\n');
	k++;
	}
}

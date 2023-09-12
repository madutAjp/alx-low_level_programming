#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return:0 when successful
 */
void print_alphabet_x10(void)
{
	char t;
	int k;

	for (k = 0; k < 10; k++)
	{
	for (t = 'a'; t <= 'z'; t++)
	{
		_putchar(t);
	}
	_putchar('\n');
	}
}

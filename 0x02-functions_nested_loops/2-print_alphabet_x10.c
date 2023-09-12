#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return:0 when successful
 */
void print_alphabet_x10(void)
{
	int i;
	char k;

	for (i = 0; i < 10; i++)
	{
	k = 'a';
	while (k <= 'z')
	{
	_putchar(k);
	k++;
	}
	}
	_putchar('\n');
}

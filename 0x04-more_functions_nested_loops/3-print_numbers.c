#include "main.h"

/**
 * print_numbers - To prints the numbers from 0 to 9
 * Return:0 when successful
 */
void print_numbers(void)
{
	char m;

	for (m = 0; m <= 9; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}

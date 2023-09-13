#include "main.h"

/**
 * times_table - To prints the 9 times table
 * Return:empty output
 */
void times_table(void)
{
	int a, b, c, d, f;


	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	c = a * b;
	if (c > 9)
	{
	d = c % 10;
	f = (c - d) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(a + '0');
	_putchar(b + '0');
	}
	else
	{
	if (f != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(c + '0');
	}
	}
	_putchar('\n');
	}
}

#include "main.h"

/**
 * jack_bauer - To print every minut of the day for Jack
 * Return:....
 */
void jack_bauer(void)
{
	int f, g, h, i;


	for (f = 0; f <= 2; f++)
	{
	for (g = 0; g <= 9; g++)
	{
	if ((f <= 1 && g <= 9) || (f <= 2 && g <= 3))
	for (h = 0; h <= 5; h++)
	{
	for (i = 0; i <= 9; i++)
	{
	_putchar(f + '0');
	_putchar(g + '0');
	_putchar(58);
	_putchar(h + '0');
	_putchar(i + '0');
	_putchar('\n');
	}
	}
	}
	}
}

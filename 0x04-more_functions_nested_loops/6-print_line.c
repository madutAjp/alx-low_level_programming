#include "main.h"

/**
 * print_line - To draws straight line in the terminal
 * @n:The number of times character '_' should be printed
 * Return:0 when successful
 */
void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
	_putchar('_');
	}
	_putchar('\n');
}

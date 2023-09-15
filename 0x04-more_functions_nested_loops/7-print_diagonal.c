#include "main.h"

/**
 * print_diagonal - To draws a diagonal line on the terminal
 * @n:The number of times the charact \ should be printed
 * Return:0 when successful
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int m, j;

	for (m = 0; m < n; m++)
	{
	for (j = 0; j < m; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}

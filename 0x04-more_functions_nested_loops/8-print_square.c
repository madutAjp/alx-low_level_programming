#include "main.h"

/**
 * print_square - To prints a square
 * @size:The size of the square
 * Return:0 when successful
 */
void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int p, m;

	for (p = 0; p < size; p++)
	{
	for (m = 0; m < size; m++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}

}

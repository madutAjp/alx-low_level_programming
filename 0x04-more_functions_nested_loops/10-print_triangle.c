#include "main.h"

/**
 * print_triangle - To prints triangle
 * @size: The number of the triangle
 * Return:0 when successful
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i, m, k;

	for (i = 1; i <= size; i++)
	{
	for (m = size; m > i; m--)
	{
	_putchar(' ');
	}
	for (k = 0; k < i; k++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}

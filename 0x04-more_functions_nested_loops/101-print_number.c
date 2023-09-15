#include "main.h"
/**
 * print_number - To prints an integer
 * @n:input integer number
 * Return:0 always
 */
void print_number(int n)
{
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	if (n == 0)
	{
	_putchar('0');
	return;
	}
	if (n / 10 != 0)
	{
	print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
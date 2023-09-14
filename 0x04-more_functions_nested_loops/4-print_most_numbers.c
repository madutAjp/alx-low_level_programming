#include "main.h"

/**
 *  print_most_numbers - To prints the numbers from 0 to 9 (excuded) 2 and 4
 *  Return:0 when successful
 */
void print_most_numbers(void)
{
	char v;

	for (v = '0'; v <= '9'; v++)
	{
	if (v != '2' && v != '4')
	{
		_putchar(v + '0');
	}
	}
	_putchar('\n');
}

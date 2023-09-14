#include "main.h"

/**
 * more_numbers - To print numbers from 0 to 14 ten times
 */
void more_numbers(void)
{
	int m, b;

	for (m = 0; m < 10; m++)
	{
	for (b = 0; b <= 14; b++)
	{
	if (b >= 10)
	{
		_putchar(b / 10 + '0');
	}
		_putchar(b % 10 + '0');
	}
		_putchar('\n');
	}
}

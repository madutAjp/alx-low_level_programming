#include "main.h"

/**
 * print_sign - Print the sign of a number and return the sign value.
 *
 * This function takes an integer 'n' as input.
 * - If 'n' is greater than zero, it prints '+' and returns 1.
 * - If 'n' is equal to zero, it prints '0' and returns 0.
 * - If 'n' is less than zero, it prints '-' and returns -1.
 *
 * @n: The number to check and print its sign.
 * Return: 1 if 'n' is greater than zero,-1 if 'n'< 0 else 0
 *
 * to print the sign of a number and return value
 * It also shows the usage of the print_sign function
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}


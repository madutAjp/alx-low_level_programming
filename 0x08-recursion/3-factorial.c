#include "main.h"
#include <stdio.h>

/**
 * factorial - Calculates the factorial of a given number
 * @n: The integer for which to calculate the factorial
 * Return: The factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	int result = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		result = 1;
		while (n > 0)
		{
			result *= n;
			n--;
	}
	return (result);
	}
}

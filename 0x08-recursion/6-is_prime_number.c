#include "main.h"
#include <stdio.h>

/**
 * is_divisible - Helper function to check if a number is divisible by another
 * @n: The number to be checked for divisibility
 * @divisor: The divisor to check against
 * Return: 1 if n is divisible by divisor, 0 otherwise
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}
	if (divisor == n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (1);
	}
	return (is_divisible(n, divisor + 1));
}
/**
 * is_prime_number - Checks if an integer is a prime number recursively
 * @n: The integer to be checked
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (!is_divisible(n, 2));
}

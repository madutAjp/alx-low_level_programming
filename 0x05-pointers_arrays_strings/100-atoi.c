#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The input string to be converted.
 *
 * Return: The integer value extracted from the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int m = 0;

	if (s == NULL)
	return (0);
	if (s[0] == '-')
	{
	sign = -1;
	m++;
	}
	else if (s[0] == '+')
	{
	m++;
	}
	while (s[m] != '\0')
	{
	if (s[m] >= '0' && s[m] <= '9')
	{
	if (result > INT_MAX / 10 ||
		(result == INT_MAX / 10 && (s[m] - '0') > INT_MAX % 10))
	{
	return ((sign == 1) ? INT_MAX : INT_MIN);
	}
	result = result * 10 + (s[m] - '0');
	}
	else
	{
	break;
	}
	m++;
	}
	result = result * sign;

	return (result);
}

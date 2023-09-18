#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _atoi- A function that convert a string to an integer
 * @s:The string to convert
 * Return:The integer value
 */
int _atoi(char *s)
{
	int digit;
	int result = 0;
	int sign = 1;
	bool overflow = false;

	while (*s)
	{
	if (*s == '-')
	{
	sign *= -1;
	}
	else if (*s >= '0' && *s <= '9')
	{
	digit = *s - '0';
	if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
	{
	overflow = true;
	break;
	}
	result = result * 10 + digit;
	}
	else if (result != 0)
	{
	break;
	}
	s++;
	}
	if (overflow)
	{
	(sign == 1);
	{
	return (LLONG_MAX);
	else
	{
	return (LONG_MIN);
return (result * sign);
	}
	}
	}
}

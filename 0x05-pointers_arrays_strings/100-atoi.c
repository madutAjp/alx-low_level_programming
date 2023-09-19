#include "main.h"

/**
 * _atoi- A function that convert a string to an integer
 * @s:The string to convert
 * Return:The integer value
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t' || *s == '\n')
	{
		s++;
	}
	if (*s == '-')
	{
	sign = -1;
		 s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
	if (result > (2147483647 - (*s - '0')) / 10)
	{
	if (sign == 1)
	{
	return (2147483647);
	}
	else
	{
	return (-2147483648);
	}
	}
	result = result * 10 + (*s - '0');
	s++;
	}
	return (result * sign);
}

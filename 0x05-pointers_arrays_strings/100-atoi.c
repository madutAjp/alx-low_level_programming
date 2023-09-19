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
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;

	while (s[i] >= '0' && s[i] <= '9')
	{
	if (result > (INT_MAX - (s[i] - '0')) / 10)
	{
	if (sign == 1)
	return (INT_MAX);
	else
	return (INT_MIN);
	}
	result = result * 10 + (s[i] - '0');
	i++;
	}
	return (result * sign);
}

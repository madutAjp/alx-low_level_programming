#include "main.h"

/**
 * _isdigit - To check for a digit (0 through 9).
 * @c: The number to checked
 * Return:1 if number is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

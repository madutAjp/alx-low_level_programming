#include "main.h"

/**
 * _isupper - To check for uppercase characters.
 * @c: The character of be checked
 * Return:1 for uppercase character or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

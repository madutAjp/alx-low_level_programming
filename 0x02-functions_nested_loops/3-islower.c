#include "main.h"

/**
 *_islower - Check if a character is a lowercase letter.
 *
 * This function takes a character as input and returns 1 if the character
 * is a lowercase letter (a to z), and return 0 otherwise
 *
 * @c: The character to be checked.
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

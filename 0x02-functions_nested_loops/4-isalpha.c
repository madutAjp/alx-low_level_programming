#include "main.h"

/**
 * _isalpha - Check if a character is an alphabet
 *
 * This function takes a character as input and returns 1 if the character
 * is an alphabetic letter (A to Z), and 0 otherwise
 *
 * @c: The character to be checked.
 * Return:1 if the character is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

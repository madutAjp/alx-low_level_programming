#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @str: Pointer to the string to search
 * @c: The character to locate
 * Return: A pointer to the first character c in the string str,
 * or NULL if the character is not found
 */
char *_strchr(char *str, char c)
{
	int m;

	for (m = 0; str[m] >= '\0' ; m++)
	{
		if (str[m] == c)
		{
			return (str + m);
		}
		str++;
	}
	return (NULL);
}

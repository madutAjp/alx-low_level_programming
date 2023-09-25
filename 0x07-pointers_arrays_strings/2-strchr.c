#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strchr - Locates a character in a string
 * @s:Pointer to the string to search
 * @c:The character to locate
 * Return:NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
	{
			return (&s[m]);
	}
	s++;
	}
	return (NULL);
}
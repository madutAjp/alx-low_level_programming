#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate the first occurrence of a character in a string
 * @s:The string to search within
 * @c:The character to locate
 * Return:A pointer to occurrence of 'c' in 's', or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

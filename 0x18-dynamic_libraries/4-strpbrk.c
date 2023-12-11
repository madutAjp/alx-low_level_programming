#include "main.h"
#include <stddef.h>


/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s:The string to be searched
 * @accept:The string containing characters to search for
 * Return:NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char km = *accept;

	while (*s != '\0')
	{
		while (km != '\0')
		{
			if (*s == km)
			{
				return (s);
			}
			km++;
		}
		s++;
	}
	return (NULL);
}

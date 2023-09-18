#include "main.h"

/**
 * _strlen - The function that return the length of a string
 * @s:The string length to be return
 * Return:0 when successful
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

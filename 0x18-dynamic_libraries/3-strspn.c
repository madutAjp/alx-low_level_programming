#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: The string to be searched
 * @accept: The string containing characters to match
 * Return: The number of bytes in the initial segment of 's' that consist
 * of only characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s != '\0')
	{
		match = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				match = 1;
				break;
			}
			accept++;
		}
		if (match == 0)
		{
			break;
		}
		s++;
		accept = accept - count;
	}
	return (count);
}


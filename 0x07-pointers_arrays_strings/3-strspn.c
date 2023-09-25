#include "main.h"
#include <stdio.h>

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s:Pointer to the string to search
 * @accept:Pointer to the string contain characters of accept
 * Return:Number of bytes of which consist only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int length = 0;
	int found;
	int i;

	while (*s != '\0')
	{
		found = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
		if (*s == accept[i])
		{
			found = 1;
			break;
		}
	}
	if (found)
	{
		length++;
		s++;
	}
	else
	{
		break;
	}
	}
	return (length);
}

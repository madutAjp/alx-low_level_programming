#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The byte to be set
 * @n: The number of bytes to be set to the value 'b'
 * Return: A pointer to the memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include "main.h"
#include <stdio.h>

/**
 * _memset - A function that fills memory with constant byte
 * @n:number of bytes we want to fill with the constant byte
 * @b:constant byte that we want to use for filling
 * @s:A pointer to the starting point in memory
 * Return: A pointer to the memory area s.
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

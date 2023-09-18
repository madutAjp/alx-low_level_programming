#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - A function that prints a string in reverse
 * @s:A string to be printed
 * Return:void
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int v;

	for (v = length - 1; v >= 0; v--)
	{
		_putchar(s[v]);
	}
	_putchar('\n');
}

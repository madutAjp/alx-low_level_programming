#include "main.h"
#include <stdio.h>

/**
 * _put - A fuction that prints a string
 * @str: A string to be prints
 * Return:void
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

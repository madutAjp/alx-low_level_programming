#include "main.h"
#include <string.h>

/**
 * puts_half - A function that prints have of a string
 * @str:The string to print the second half of
 * Return:void
 */
void puts_half(char *str)
{
	int length;
	int m;
	int v;

	length = 0;

	for (m = 0; str[m] != '\0'; m++)
		length++;
	v = (length / 2);
	if ((length % 2) == 1)
		v = ((length + 1) / 2);
	for (m = v; str[m] != '\0'; m++)
		_putchar(str[m]);
	_putchar('\n');
}

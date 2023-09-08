#include <stdio.h>

/**
 * main - Entry here
 *
 * Return: 0 when done
 */
int main(void)
{
	int b;

	for (b = 0 ; b < 10 ; b++)
		putchar(b + '0');
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 when through
 */
int main(void)
{
	int m;
	char w;

	for (m = 0 ; m < 10 ; m++)
		putchar(m + '0');
	for (w = 'a' ; w <= 'f' ; w++)
		putchar(w);
	putchar('\n');
	return (0);
}

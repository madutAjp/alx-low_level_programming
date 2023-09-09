#include <stdio.h>

/**
 * main - Inventing is the combination of brains
 *
 * Return:0 when done
 */
int main(void)
{
	int m, p;

	for (m = 10; m <= 18; m++)
	{
		putchar(m + '0');
	}
	for (p = m + 11; p <= 29; p++)
	{
		putchar(p + '0');
	}
	if (m < 18 || p < 29)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

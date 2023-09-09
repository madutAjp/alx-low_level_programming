#include <stdio.h>

/**
 * main - Inventing is the combination of brains
 *
 * Return:0 when done
 */
int main(void)
{
	int m, p;

	for (m = 0; m <= 8; m++)
	{
		putchar(m + '0');
	}
	for (p = m + 1; p <= 9; p++)
	{
		putchar(p + '0');
	}
	if (m < 8 || p < 9)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

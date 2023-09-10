#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Inventing is the combination of brains
 *
 * Return:0 when done
 */
int main(void)
{
	int m, v;

	for (m = 0; m <= 9; m++)
	{
		putchar(m + '0');
	}
	for (v = m + 1; v <= 9; v++)
	{
		putchar(v + '0');
	}
	if (!(m == 9 && v == 8))
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

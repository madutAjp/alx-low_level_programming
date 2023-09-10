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
	int m, j;

	for (m = 0; m <= 8; m++)
	{
	for (j = m + 1; j <= 9; j++)
	{
	putchar(m + '0');
	putchar(j + '0');

	if (m != 8 || j != 9)
	{
	putchar(',');
	putchar(' ');
	}

	if (m == 8 && j == 9)
	{
	putchar('\n');
	}
	}
	}
	return (0);
}

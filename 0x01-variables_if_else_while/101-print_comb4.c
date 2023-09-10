#include <stdio.h>

/**
 * main - Starting here
 *
 * Return: 0 when finished
 */
int main(void)
{
	int z, m, a;

	for (z = 0; z <= 7; z++)
	{
	for (m = z + 1; m <= 8; m++)
	{
	for (a = m + 1; a <= 9; a++)
	{
	putchar(z + '0');
	putchar(m + '0');
	putchar(a + '0');

	if (z != 7 || m != 8 || a != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	return (0);
}

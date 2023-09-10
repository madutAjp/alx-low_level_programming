#include <stdio.h>

/**
 * main - this the begining of software
 *
 * Return: 0 when finished
 */
int main(void)
{
	int m, v;

	for (m = 0; m <= 99; m++)
	{
	for (v = 0; v <= 99; v++)
	{
	putchar(m / 10 + '0');
	putchar(m % 10 + '0');
	putchar(' ');
	putchar(v / 10 + '0');
	putchar(v % 10 + '0');
	putchar(',');
	}
	}
	putchar('\n');
	return (0);
}

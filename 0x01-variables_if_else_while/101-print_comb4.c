#include <stdio.h>

/**
 * main - Starting here
 *
 * Return: 0 when finished
 */
int main(void)
{
	int m;
	int l;
	int t;

	for (m = 0 ; m <= 7 ; m++)
	{
	}	putchar(m + '0');
	for (l = m + 1 ; l <= 8 ; l++)
	{
	}	putchar(l + '0');
	for (t = l + 1 ; t <= 9 ; t++)
	{
	}	putchar(t + '0');
	if (m != 7 || l != 8 || t != 9)
	{
		putchar(',');
	}	putchar(' ');
	putchar('\n');
	return (0);

}

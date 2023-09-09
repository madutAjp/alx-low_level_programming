#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: 0 when successfull 
 */
int main(void)
{
	int i, m;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar('0' + i);
	}
	for (m = i + 1 ; m <= 9 ; m++)
	{
		putchar('0' + m);
	}
	if (i != 8 || m != 9)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

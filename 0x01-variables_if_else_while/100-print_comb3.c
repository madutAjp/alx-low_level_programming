#include <stdio.h>

/**
 * main - Inventing is the combination of brains
 *
 * Return:0 when done
 */
int main(void)
{
	int num_1 = '0';
	int num_2 = '0';

	while (num_1 <= '9')
	{
		num_2 = num_1 + 1;
	}
	num_2++;
	while (num_2 <= '9')
	{
		putchar(num_1);
		putchar(num_2);
	}
	num_1++;
	if (num_1 != '8' || num_2 != '9')
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

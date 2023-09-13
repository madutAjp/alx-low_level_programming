#include <stdio.h>

/**
 * main - program prints first 50 fibonacci numbers
 *
 * Return:0 when successful
 */
int main(void)
{
	unsigned long int  t1 = 1;
	unsigned long int t2 = 2;
	int k;

	printf("%lu", t1);
	for (k = 1 ; k < 50 ; k++)
	{
	printf("%ld", t2);
       	t1 + t2;
	t1 = t2;
	t2 = t1;
	if (k != 49)
	{
	printf(",");
	}
	}
	printf("\n");
	return (0);
}

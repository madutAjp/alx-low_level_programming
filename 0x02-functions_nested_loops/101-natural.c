#include <stdio.h>

/**
 * main - To list all natural numbers below 1024
 *
 *Return:0 when seccessful
 */
int main(void)
{
	int limit = 1024;
	int sum = 0;
	int m;

	for (m = 1; m < 1024; m++)
	{
	if (m % 3 == 0 || m % 5 == 0)
	{
	sum = sum + m;
	}
	}
	printf("%d\n", sum);
	return (0);
}

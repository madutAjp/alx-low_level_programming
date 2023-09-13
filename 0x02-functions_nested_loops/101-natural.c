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

	for (m = 3; m < limit; m++)
	{
	if (m % 3 == 0 || m % 5 == 0)
	{
	sum += m;
	}
	}
	Printf(sum);
	return (0);
}

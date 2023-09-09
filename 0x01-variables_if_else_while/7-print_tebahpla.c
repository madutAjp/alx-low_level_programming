#include <stdio.h>


/**
 * main - Entry point here
 *
 * Return:0 when done
 */
int main(void)
{
	char m;

	for (m = 'z' ; m >= 'a' ; m--)
		putchar(m);
	putchar('\n');
	return (0);
}

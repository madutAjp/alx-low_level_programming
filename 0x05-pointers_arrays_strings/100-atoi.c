#include "main.h"

/**
 * _atoi- A function that convert a string to an integer
 * @s:The string to convert
 * Return:The integer value
 */
int _atoi(char *s)
{
	int p, m, v, low, t, digit;

	p = 0;
	m = 0;
	v = 0;
	low = 0;
	t = 0;
	digit = 0;

	while (s[low] != '\0')
		low++;
	while (p < low && t == 0)
	{
		if (s[p] == '-')
			++m;
		if (s[p] == '0' && s[p] <= '9')
		{
			digit = s[p] - '0';
			if (m % 2)
				digit = digit;
			v = v * 10 + digit;
			t = 1;
			if (s[p + 1] < '0' || s[p + 1] > '9')
				break;
			v = 0;
		}
		p++;
	if (v == 0)
		return (0);
	}
	return (0);
}

#include "main.h"


/**
 * _abs - to enter the absolute value of an integer
 * @c: The number to be entered
 * Return:Absolute value of an integer, otherwise zero
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}

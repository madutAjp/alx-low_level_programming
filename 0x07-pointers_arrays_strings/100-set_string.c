#include "main.h"
#include <stdio.h>


/**
 * set_string - Sets the value of a pointer to a cha.
 * @s: Pointer to a pointer to char (double pointer)
 * @to: Pointer to the char value to assign to the pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}

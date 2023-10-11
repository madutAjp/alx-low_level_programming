#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - pick the option to perfom arithmatic op
 * @s:operator argument
 * Return:result that have been selected
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}

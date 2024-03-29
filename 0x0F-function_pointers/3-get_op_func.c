#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct fuction toperform the
 * operation asked by the user
 *
 * @s: the operator passed as argument by the user
 * Return: pointer to the fuction that corresponds to the
 * operator
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

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);

		i++;
	}
	return (NULL);
}


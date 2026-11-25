#include "3-calc.h"
#include <string.h>
#include <stddef.h>

/**
 * get_op_func - selects the function for an operator
 * @s: the operator symbol
 *
 * Return: pointer to the matching function, or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t op[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	while (op[i].op != NULL)
	{
		if (strcmp(s, op[i].op) == 0)
		{
			return (op[i].f);
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects the corrects function to perform
 * asked by the user
 * @s: operator argument
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s &&
				(s != NULL && *s != '\0' && *(s + 1) == '\0'))
		{
			return (ops[i].f);
		}

		i++;
	}

	return (NULL);
}

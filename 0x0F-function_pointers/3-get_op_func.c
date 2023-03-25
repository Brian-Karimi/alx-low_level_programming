#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func-get ops function ptr of type char  array
 * function accepts only two int type inputs
 * @s: a char* pointing to a symbol form the program argument
 * Return: one of the ops functions for computation
 **/
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
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op == 0))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

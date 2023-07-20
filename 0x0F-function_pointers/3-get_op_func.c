#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the correct function
 * @s: operator passes an argument
 * Return: pointer to function corresponding to parameter
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

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}

#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - function that selects the correct function
 * @s: operator passed
 * Return: pointer to corresponding func
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

	for (i = 0; i < 6; i++)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
	}
	return (NULL);
}

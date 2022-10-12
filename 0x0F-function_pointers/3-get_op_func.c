#include "3-calc.h"

/**
 * get_op_func - get operator's function
 * @s: a string for the operator
 *
 * Description: selects the correct function to perform
 * the operation asked by the user.
 * Return: a pointer to function of signature int f(int, int) or NULL
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
	while (i < 5)
	{
		if (s[0] == (ops[i]).op[0] && s[0] != 0)
			return ((ops[i]).f);
		i++;
	}
	return (NULL);
}

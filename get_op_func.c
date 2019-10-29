#include "holberton.h"
/**
 * get_op_func - Function that selects the fucntion to perform the operation
 * asked by the user
 *
 * @s: Pointer type char
 *
 * Return: 0
 */
int (*get_op_func(const char *s))(va_list list)
{
	op_t ops[] = {
		{"c", op_char},
		{"s", op_string},
		{"i", op_integer},
		{"d", op_integer},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

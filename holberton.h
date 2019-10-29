#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct op - Struct op
 *
 * @op: The format
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)();
} op_t;

int op_char(va_list list);
int op_string(va_list list);
int (*get_op_func(const char *s))(va_list list);

#endif /* HOLBERTON_H */

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
	void (*f)();
} op_t;

void op_char(va_list list);
void op_string(va_list list);
void op_percent();

#endif /* HOLBERTON_H */

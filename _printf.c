#include "holberton.h"
/**
 * _printf - prints anything (output) according to a format
 * @format: character string (c, s, %)
 * Return: numbers of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, index = 0, x = 0, count = 0, (*gof)(va_list list);

	va_start(list, format);
	if ((format == NULL) || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	else
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			index = i + 1;
			if (format[i] != '%')
			{
				_putchar(format[i]);
				count++;
			}
			else if (format[i] == '%' && format[index] == '%')
			{
				_putchar('%');
				i = index;
				count++;
			}
			else
			{
				gof = get_op_func(&format[index]);
				if (gof != NULL)
				{
					count += gof(list);
					i = index;
				}
				else
					_putchar(format[i]);
			}
		}
	}
	va_end(list);
	return (count);
}

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

/**
 * op_char - Function that prints char
 *
 * @list: Variable type va_list
 *
 *Return: 0
 *
 */
int op_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * op_string - Function that prints string
 *
 * @list: Variable type va_list
 *
 *Return: 0
 *
 */
int op_string(va_list list)
{
	char *s = va_arg(list, char*);
	int count = 0;

	if (s == NULL)
		s = "(null)";

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		count++;
	}

	return (count);
}

#include "holberton.h"
/**
 * _printf - prints anything (output) according to a format
 * @format: character string (c, s, %)
 * Return: numbers of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, index = 0, x = 0;

	op_t options[] = {
		{"c", op_char},
		{"s", op_string},
		{"%", op_percent},
		{NULL, NULL}
	};

	va_start(list, format);

	if (format == NULL)
	{
		return (-1);
	}
	else
	{
		while (format[i] != '\0')
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
			}
			else
			{
				index = i + 1;
				x = 0;
				while (options[x].op != '\0')
				{
					if (format[index] == options[x].op[0])
						options[x].f(list);
					x++;
				}
				i = index;
			}
			i++;
		}
	}
	va_end(list);
	return (0);
}

/**
 * op_char - Function that prints char
 *
 * @list: Variable type va_list
 *
 *Return: 0
 *
 */
void op_char(va_list list)
{
	_putchar(va_arg(list, int));
}

/**
 * op_string - Function that prints string
 *
 * @list: Variable type va_list
 *
 *Return: 0
 *
 */
void op_string(va_list list)
{
	char *s = va_arg(list, char*);

	if (s == NULL)
		s = "(null)";
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

/**
 * op_percent - Function that prints percent
 *
 * @list: Variable type va_list
 *
 *Return: 0
 *
 */
void op_percent()
{
	_putchar('%');
}

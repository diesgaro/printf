#include <stdio.h>
#include "holberton.h"
/**
 * _printf - prints anything (output) according to a format
 * @format: character string (c, s, %)
 * Return: numbers of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list list;
	const char *c, *s; /*To be initialized as char format and string format*/

	va_start(list, format);
	if (format == NULL)
		return (-1);

	for (c = format; *c != '\0'; c++)
	{
		if (*c != '%')
		{
			putchar(*c);
			continue;
		}

		switch (*++c)
		{
		case 's':
			for (s = va_arg(list, char*); *s != '\0'; s++)
				putchar(*s);
			break;
		case 'c':
			putchar(va_arg(list, int));
			break;
		default:
			return (-1);
		}
	}
	va_end(list);
	return (0);
}

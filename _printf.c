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
	/*int i = 0;*/

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
			s = va_arg(list, char*);
			if (s == NULL)
				s = "(null)";
			while (*s != '\0')
			{
				putchar(*s);
				s++;
			}
			break;
		case 'c':
			putchar(va_arg(list, int));
			break;
		case '%':
			putchar(*c);
			break;
		default:
			putchar('%');
			while (*c != '\0')
			{
				putchar(*c);
				c++;
			}
			break;
		}
	}
	va_end(list);
	return (0);
}

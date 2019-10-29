# 0x11. C - printf

Modified version of printf function that produces output according to a format.

## Requeriments 📋

Ubuntu 14.04 LTS and gcc 4.8.4 with the flags -Wall -Werror -Wextra and -pedantic

## Authorized functions and macros 🚀
* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

## Exercises ⚙️

### [0. _printf](https://github.com/dfbq91/printf/blob/master/_printf.c)
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life mandatory
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
* c
* s
* %
* You don’t have to reproduce the buffer handling of the C library printf function
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

### [1. printf](https://github.com/dfbq91/printf/blob/master/_printf.c)
Handle the following conversion specifiers:
* d
* i
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers
* Write a function that checks for a digit (0 through 9).

### [man_3_printf](https://github.com/dfbq91/printf/blob/master/man_3_printf)
Create a man page for your function.

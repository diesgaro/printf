#include "holberton.h"

/**
* op_binary - Function that prints a converted number to binary
* @list: Variable type va_list
* Return: 0
 */

int op_binary(va_list list)
{
	int number = va_arg(list, int);
	unsigned int positive;
	int count = 0;

	positive = number;

	if (positive == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		count += fnc_put_number_binary(positive);
	}
	return (count);
}

/**
 * fnc_put_number_binary - Function that prints binary number with recursion
 * @number: Variable unsigned int type
 * Return: Count to the numbers prints
 */
int fnc_put_number_binary(unsigned int number)
{
	unsigned int r_mod;
	int count = 0;

	if (number == 0)
	{
		return (count);
	}

	r_mod = number % 2;
	number = number / 2;

	if (r_mod == 0)
	{
		count++;
		count += fnc_put_number_binary(number);
		_putchar('0');
	}
	if (r_mod == 1)
	{
		count++;
		count += fnc_put_number_binary(number);
		_putchar('1');
	}

	return (count);
}

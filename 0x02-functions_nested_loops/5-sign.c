#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @num: The number to be checked.
 *
 * Return: 1 if num is is greater than zero, -1 if number is
 * less than zero, 0 otherwise.
 */

int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

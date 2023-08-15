#include "main.h"

/**
 * print_last_digit - Prints the last digit in the number.
 * @num: Number to be checked.
  *
 * Return: Value of the last digit.
 */

int print_last_digit(int num)
{
	int last = num % 10;

	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}

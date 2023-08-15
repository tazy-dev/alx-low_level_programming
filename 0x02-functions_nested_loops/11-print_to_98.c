#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 *		 followed by a new line.
 * @num: Starting number.
 */

void print_to_98(int num)
{
	int i;

	if (num <= 98)
	{
		for (i = num; i < 98; i++)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('98');
		_putchar('\n');
	}
	else
	{
		for (i = num; i > 98; i--)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('98');
		_putchar('\n');
	}
}

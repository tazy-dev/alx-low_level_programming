#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 *		 followed by a new line.
 * @num: Starting number.
 */

void print_to_98(int num)
{
	int i;

	if (num < 98)
	{
		for (i = num; i < 98; i++)
		{
			if (i < 0)
			{
				_putchar('-');
				print_to_98(abs(i));
			}
			if (i < 10)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((i / 10) + '0');
				print_to_98((i % 10));
			}
		}
	}
	else
	{
		for (i = num; i > 99; i--)
		{
			_putchar((i / 100) + '0');
			print_to_98((i % 100));
		}
		_putchar('9');
		_putchar('9');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

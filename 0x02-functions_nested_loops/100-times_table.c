#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0
 * @num : The value of the times table to be printed.
 */

void print_times_table(int num)
{
	int i;
	int j;

	if (num >= 0 && num <= 15)
	{
		for (i = 0; i < num; i++)
		{
			_putchar('0');
			for (j = 1; j < num; j++)
			{
				int result = i * j;

				if (result <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}


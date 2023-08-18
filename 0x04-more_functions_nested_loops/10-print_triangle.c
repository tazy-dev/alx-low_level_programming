#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - 1 -i; j > 0; j--)
				_putchar(' ');

			for (k = 0; k <= i; k++)
				_putchar('#');

			if (i == size - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}


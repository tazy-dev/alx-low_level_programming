#include "main.h"

/**
 * func - Prints n elements of an array of integers, followed by a new line.
 * @a: An Array of integers.
 * @n: The number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			_putchar(a[i] + '0');
		else
			printf("%d, ", s[i]);
	}
	_putchar('\n');
}

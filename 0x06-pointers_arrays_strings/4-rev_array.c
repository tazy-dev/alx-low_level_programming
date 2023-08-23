#include "main.h"

/**
 * reverse_array - A function that reverses the content of
 *                 an array of integers.
 * @a: The array to be reversed.
 * @n: The number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = tmp;
	}
}

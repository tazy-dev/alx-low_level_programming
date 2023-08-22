#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	// a temporary variable to hold data while swapping
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

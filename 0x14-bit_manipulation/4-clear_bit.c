/*
 * File: 4-clear_bit.c
 * Auth: tazy-dev
 */

#include "main.h"
/**
 * clear_bit - clear the binary value at the posetion marked index
 * @n: Pointer to the Decimal number,
 * @index: The index where value is to be cleared
 *
 * Return: 1 if succees or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1;

	/*since n is unsigned long max index is 64 bit*/
	if (index > 64)
		return (-1);
	else if (index == 64)
		return (1);
	set <<= index;
	if ((*n >> index) & 1)
		*n -= set;
	return (1);
}

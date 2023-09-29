/*
 * File: 2-get_bit.c
 * Auth: tazy-dev
 */

#include "main.h"
/**
 * get_bit - Get the binary value at index
 * @n: The Decimal number.
 * @index: The index where to retrive value
 *
 * Return: The binary value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*since n is unsigned long max index is 64 bit*/
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}

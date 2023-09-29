/*
 * File: 1-print_binary.c
 * Auth: tazy-dev
 */

#include "main.h"
/**
 * print_binary - Print binary representation of a number
 * @n: The number to be converted
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int s = n;
	int len = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (s > 0)
	{
		len++;
		s >>= 1;
	}
	for (--len; len >= 0; len--)
	{
		if (((n >> len) & 1) == 1)
			_putchar('1');
		else
			_putchar('0');
	}
}

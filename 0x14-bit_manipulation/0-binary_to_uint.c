/*
 * File: 0-binary_to_uint.c
 * Auth: tazy-dev
 */
#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned number
 * @b: Pointer to a string of 1's and 0's.
 *
 * Return: The associated insigned inteager
 */
unsigned int binary_to_uint(const char *b)
{
	int power, len = 0;
	unsigned int inteager = 0;

	if (b == NULL)
		return (0);
	while (b[len])
	{
		if (b[len] < '0' || b[len] > '9')
			return (0);
		len++;
	}
	for (power = 1, len--; len >= 0; len--, power *= 2)
		if (b[len] == '1')
			inteager += power;
	return (inteager);
}

/*
 * 5-flip_bits.c
 * Auth: tazy-dev
 */

#include "main.h"
/**
 * flip_bits - Flip bits to convert one number to another number
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int no_of_bits = 0;

	/*XOR operation will return 1 if the bits differ*/
	xor = n ^ m;
	for (; xor > 0; xor >>= 1)
		if ((xor & 1))
			no_of_bits++;
	return (no_of_bits);
}

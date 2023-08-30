#include "main.h"

int recursive_operation(int n, int divider);

/**
 * is_prime_number - A function thhat test if n is prime.
 * @n: The number to be tested.
 *
 * Return: returns 1 if n is a prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (recursive_operation(n, 2));
}

/**
 * recursive_operation - The actual computation that test if n is prime.
 * @n: The number to be tested.
 * @divider: The number that test primality
 *
 * Return: returns 1 if n is a prime, 0 otherwise.
 */
int recursive_operation(int n, int divider)
{
	if (n == divider)
		return (1);
	if (n % divider == 0)
		return (0);
	return (recursive_operation(n, divider + 1));
}


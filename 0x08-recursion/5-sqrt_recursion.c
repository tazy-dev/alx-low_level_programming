#include "main.h"


int recursive_operation(int n, int root);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (recursive_operation(n, 0));
}

/**
 * recursive_operation - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @root: The testing root
 *
 * Return: the resulting square root
 */
int recursive_operation(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (recursive_operation(n, root + 1));
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  Print the alphabet in smallcase from z to z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  Print the alphabet in small case from a to z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}

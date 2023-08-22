#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s++)
		len++;
	s--;
	for (i = len - 1; i >= 0; i--)
		_putchar(*--s);

	_putchar('\n');
}

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

	for (i = len; i >= 0; i--)
		_putchar(*--s);

	_putchar('\n');
}

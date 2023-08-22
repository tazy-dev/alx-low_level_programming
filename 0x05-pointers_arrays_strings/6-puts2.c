#include "main.h"

/**
 * puts2 - A function that prints every other character of a string,
 *	   starting with the first character, followed by a new line.
 * @s: The string to be printed.
 */

void puts2(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i++])
		len++;
	for (i = 0; i < len; i += 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @s: The string to be proceesed.
 */

void puts_half(char *s)
{
	int i = 0, len = 0;

	while (s[i++])
		len++;
	i = (len % 2 == 0) ? len / 2 : (len - 1) / 2;
	while (i < len)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

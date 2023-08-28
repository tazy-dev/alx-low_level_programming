#include "main.h"

/**
 * memset - Fills the first n bytes of the memory area pointed to by s 
 *	     with the constant byte b.
 * @s: The memory area to be filled.
 * @b: The flling byte
 * @n: The numbers of bytes to fill
 *
 * Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

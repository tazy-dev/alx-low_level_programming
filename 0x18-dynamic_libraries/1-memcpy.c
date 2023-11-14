#include "main.h"
/**
 * _memcpy - Copies n bytes for mem area src to mem area dest.
 * @dest: The destenation location.
 * @src: The source location
 * @n: The number of bytes to be copied
 *
 * Return: A pointer to the destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

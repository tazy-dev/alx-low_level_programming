#include "main.h"

/**
 * _strncpy - A function that copies a string.
 * @dest: The first string and where the result will be stored.
 * @src : The second string
 * @n   : The number of bytes
 *
 * Return: A pointer to a string where the second string
 *         will be copied.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((dest[i] = src[i]) != '\0' && i < n)
		++i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

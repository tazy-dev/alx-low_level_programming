#include "main.h"

/**
 * _strncat - A function that concatenates two strings to the
 *           nth byte of the second string.
 * @dest: The first string and where the result will be stored.
 * @src : The second string
 * @n   : The number of bytes
 *
 * Return: Value of the last digit.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

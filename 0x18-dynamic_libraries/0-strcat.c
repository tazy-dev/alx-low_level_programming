#include "main.h"

/**
 * _strcat - A function that concatenates two strings..
 * @dest: The first string and where the result will be stored.
 * @src : The second string
 *
 * Return: Pointer to the concatenated String.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strcmp - A function that compares two strings..
 * @s1: The first String.
 * @s2: The second String
 *
 * Return: 0 if the strings matches,otherwise if they don't.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}


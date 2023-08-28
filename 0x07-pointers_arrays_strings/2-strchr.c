#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	char l;

	while (true)
	{
		l = *(s++);
		if (l  == c)
			return (s - 1);
		if (l == '\0')
			return (NULL);
	}

}


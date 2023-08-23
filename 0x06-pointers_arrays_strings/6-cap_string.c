#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i, j;
	char seperators[] = {' ', '\t', '\n', ',', ';', '.', '!',
			     '?', '(', ')', '{', '}'};

	i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;
		else
			if (s[i] >= 'a' && s[i] <= 'z')
				for (j = 0; j < 13; j++)
					if (s[i - 1] == seperators[j])
						s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

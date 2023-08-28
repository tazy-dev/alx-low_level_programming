#include "main.h"

/**
 * _strspn - Gets te length of a prefix substring.
 * @s: The main String.
 * @accept: The substring to be matched
 *
 * Return: The number of bytes containing only accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		if ((count - i) == 0)
			break;
	}
	return (count);
}

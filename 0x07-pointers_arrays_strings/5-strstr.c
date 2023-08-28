#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	short found = 0;
	short end = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != 0; j++)
		{
			if (haystack[i + j] == '\0')
			{
				found = 0;
				end = 1;
				break;
			}
			if (haystack[i + j] == needle[j])
				found = 1;
			else
			{
				found = 0;
				break;
			}
		}
		if (found == 1)
			return (haystack + i);
		if (end == 1)
			break;
	}
	return (NULL);
}

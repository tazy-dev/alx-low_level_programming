#include "main.h"

/**
 * leet - A function that encodes a string into 1337.
 *         Letters a and A should be replaced by 4
 *         Letters e and E should be replaced by 3
 *         Letters o and O should be replaced by 0
 *         Letters t and T should be replaced by 7
 *         Letters l and L should be replaced by 1
 * @s: The string to be encoded.
 *
 * Return: Pointer to the encoded String.
 */

char *leet(char *s)
{
	int i = 0;
	char leet[10] = {'a', 'A', 'e', 'E', 'o', 'O',
			 't', 'T', 'l', 'L'};
	char encode[] = {'4', '3', '0', '7', '1'};
	int code;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
			if (s[i] == leet[j])
			{
				code = j / 2;
				s[i] = encode[code];
				break;
			}
		i++;
	}
	return (s);

}

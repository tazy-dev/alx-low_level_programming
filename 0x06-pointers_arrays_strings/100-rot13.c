#include "main.h"

/**
 * rot13 - A function that encodes a string using rot13..
 * @str: The String to be encoded.
 *
 * Return: Pointer to the encoded string.
 */

char *rot13(char *str)
{
	char ascii[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		for (j = 0; ascii[j] != '\0'; j++)
			if (str[i] == ascii[j])
			{
				str[i] = rot[j];
				break;
			}
		i++;
	}
	return (str);
}

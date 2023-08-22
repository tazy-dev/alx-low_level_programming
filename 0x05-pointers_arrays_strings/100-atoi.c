#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to be converted.
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int length, counter, foundInt, totalNumber, singleNumber, numberOfNegatives;

	length = 0;
	foundInt = 0;
	totalNumber = 0;
	singleNumber = 0;
	numberOfNegatives = 0;

	while (s[length] != '\0')
		length++;
	for (counter = 0; counter < length; counter++)
	{
		if (s[counter] == '-')
			numberOfNegatives++;
		if (s[counter] >= '0' && s[counter] <= '9')
		{
			singleNumber = s[counter] - '0';
			if (numberOfNegatives % 2 != 0)
				singleNumber = -singleNumber;
			totalNumber = totalNumber * 10 + singleNumber;
			if (s[counter + 1] < '0' && s[counter + 1] < '9')
			{
				foundInt = 1;
				break;
			}
		}
	}
	if (foundInt == 0)
		return (0);
	else
		return (totalNumber);
}

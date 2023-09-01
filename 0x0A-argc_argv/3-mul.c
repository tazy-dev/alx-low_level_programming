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
			foundInt = 1;
			if (s[counter + 1] < '0' || s[counter + 1] > '9')
			{
				foundInt = 0;
				break;
			}
		}
	}
	if (foundInt == 0)
		return (0);
	else
		return (totalNumber);
}

/**
 * main - Multiply two Numbers.
 * @argc: Argument Count.
 * @argv: Argument Vector
 *
 * Return: 0 (Success).
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}

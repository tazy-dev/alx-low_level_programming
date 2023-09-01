#include "main.h"

#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to be converted.
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int length, counter, totalNumber, singleNumber, numberOfNegatives;

	length = 0;
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
				return (0);
			totalNumber = totalNumber * 10 + singleNumber;
		}
	}
		return (totalNumber);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		sum += _atoi(argv[k]);
	}

	printf("%d\n", sum);
	return (0);
}

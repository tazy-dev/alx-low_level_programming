#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int password[64];
	int counter, checksum, lastOne;

	checksum = 0;

	srand(time(NULL));

	for (counter = 0; counter < 64; counter++)
	{
		pass[counter] = rand() % 100;
		checksum += (pass[counter] + '0');
		putchar(pass[counter] + '0');
		if ((2772 - sum) - '0' < 100)
		{
			lastOne = 2772 - sum - '0';
			checksum += lastOne;
			putchar(lastOne + '0');
			break;
		}
	}

	return (0);
}

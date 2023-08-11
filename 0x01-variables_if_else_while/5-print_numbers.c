#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  Prints base 10 numbers 0-9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
		{
			printf("%d\n", i);
			break;
		}
		printf("%d", i);
	}
	return (0);
}

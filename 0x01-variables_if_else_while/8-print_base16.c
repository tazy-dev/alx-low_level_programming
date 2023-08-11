#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  Prints base 16 elements using putchar only
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 48 ; num <= 102; num++)
	{
		putchar(num);
		if (num == 57)
			num = 96;
	}
	putchar('\n');
	return (0);
}

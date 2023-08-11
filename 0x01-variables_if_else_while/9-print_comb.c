#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  Prints base 10 numbers using putchar only, and
 * seperated by ,' '
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 48 ; num <= 57; num++)
	{
		putchar(num);
		if (num == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

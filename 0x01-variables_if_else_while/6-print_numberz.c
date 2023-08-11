#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  Prints base 10 numbers using putchar only
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 48 ; num <= 57; num++)
		putchar(num);
	putchar('\n');
	return (0);
}

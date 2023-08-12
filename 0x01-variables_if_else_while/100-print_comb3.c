#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  Prints the combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	int num2;

	for (num = 48 ; num <= 57; num++)
	{
		for (num2 = num + 1; num2 <= 57; num2++)
		{
			putchar(num);
			putchar(num2);
			if (num == 56 && num2 == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

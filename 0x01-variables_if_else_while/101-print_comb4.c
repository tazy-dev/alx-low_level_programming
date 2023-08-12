#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  Prints the combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	int num2;
	int num3;

	for (num = 48 ; num <= 57; num++)
	{
		for (num2 = num + 1; num2 <= 57; num2++)
		{
			for (num3 = num2 + 1; num3 <= 57; num3++)
			{
				putchar(num);
				putchar(num2);
				putchar(num3);
				if (num == 55 && num2 == 56 && num3 == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

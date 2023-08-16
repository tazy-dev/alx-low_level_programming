#include <stdio.h>

/**
 * main - Prints first 98 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long fibo1 = 0, fibo2 = 1, sum = 0;

	for (i = 0; i < 98; i++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);
		fibo1 = fibo2;
		fibo2 = sum;

		if (i  == 97)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

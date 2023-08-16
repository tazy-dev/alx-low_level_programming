#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  *
  * Return: Always 0
  */
int main(void)
{
	int i = 0;
	unsigned long fibo1 = 0, fibo2 = 1, sum = 0;
	bool x = true;

	while (x)
	{
		fibo2 += fibo1;
		fibo1 = fibo2 - fibo1;

		if (fibo2 < 4000000)
		{
			if ((fibo2 % 2) == 0)
				sum += fibo2;
		}
		else
			x = false;
	}

	printf("%lu\n", sum);
	return (0);
}

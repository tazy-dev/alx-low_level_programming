#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int ope1, ope2, result;
	char operartion;
	int (*arithmatic)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ope1 = atoi(argv[1]);
	ope2 = atoi(argv[3]);

	arithmatic = get_op_func(argv[2]);

	if (!arithmatic)
	{
		printf("Error\n");
		exit(99);
	}

	operation = argv[2];

	if ((operation == '/' || operation == '%') && obe2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = arithmatic(ope1, ope2);

	printf("%d\n", result);

	return (0);
}

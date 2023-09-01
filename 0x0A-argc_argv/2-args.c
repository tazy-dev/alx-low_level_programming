#include "main.h"

/**
 * main - Prints all the passed argimnets .
 * @argc: Argument Count.
 * @argv: Argument Vector
 *
 * Return: 0 (Success).
 */

int main(int argc, char *argv[]);
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

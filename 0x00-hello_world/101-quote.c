#include <unistd.h>

/**
 * main - Entry point
 *
 * Description:  Prints "and that piece of art is useful" - Dora Korpar,
 * 2015-10-19",followed by a new line, to standard error.
 * Using Printf and Puts isn't allowed
 *
 * Return: Return an error 1 (Fail)
 */

int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, text, 59);
	return (1);
}

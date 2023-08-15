#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @alpha : The character to be checked
 *
 *  Return: On success 1.
 */

int _islower(int alpha)
{
	if (alpha >= 97 && alpha <= 122)
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @alpha: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int alpha)
{
	if ((alpha >= 65 && alpha <= 90) || (alpha >= 97 && alpha <= 122))
		return (1);
	else
		return (0)
}

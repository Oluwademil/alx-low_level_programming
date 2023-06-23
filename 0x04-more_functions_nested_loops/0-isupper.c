#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character
 * @c: Variable to be checked
 * Returns: 1 if character is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}


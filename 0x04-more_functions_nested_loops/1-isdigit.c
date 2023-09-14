#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: character to be checked.
 *
 * Returns: (1) for a digit and (0) for a non digit.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: Character to be checked.
 *
 * Return: 1 on success, otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

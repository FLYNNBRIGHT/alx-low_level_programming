#include "main.h"

/**
 * _isalpha - checks for alphabetic characters and returns 1 else 0.
 * @c: is the character to be checked.
 *
 * Return: Always 1 if true and 0 if false.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

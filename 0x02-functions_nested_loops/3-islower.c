#include "main.h"

/**
 * _islower - checks for lowercase characters and prints 1 else 0.
 * @c: character to be checked
 *
 * Return: Always 1 (Success), Always 0 (Failure).
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

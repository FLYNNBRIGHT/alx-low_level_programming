#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes the character to the standard output.
 * &c: The character to print.
 *
 * Return: Always 1 (Success).
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

/**
 * print_sign - prints the sign of integers with their respective return values.
 * @n: is the integer to be checked.
 *
 * Return: Always 1 for a positive integer, -1 for a negative integer and 0 for
 *		zero.
 */

int print_sign(int n)
{
	if (n < 1)
	{
		_putchar('-');
		return (-1);
	}
	else if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}

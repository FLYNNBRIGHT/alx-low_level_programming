#include "main.h"

/**
 * print_last_digit - prints the last digit of an number and returns the last
 *			digit of the value.
 * @n: is the number to be considered.
 *
 * Return: The last digit of the number.
 */

int print_last_digit(int n)
{
	int lst_dg = n % 10;

	if (lst_dg < 0)
		lst_dg *= -1;

	_putchar(lst_dg + '0');

	return (lst_dg);
}

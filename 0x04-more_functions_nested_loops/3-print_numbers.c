#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new number.
 */

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		_putchar(a);
	_putchar('\n');
}

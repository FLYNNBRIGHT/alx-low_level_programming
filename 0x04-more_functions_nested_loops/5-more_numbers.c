#include "main.h"

/**
 * more_numbers - Prints 14 times the numbers (0 through 9)
 */

void more_numbers(void)
{
	int numb, line;

	for (line = 0; line <= 9; line++)
	{
		for (numb = 0; numb <= 14; numb++)
		{
			if (numb > 9)
				_putchar((numb / 10) + '0');
			_putchar((numb % 10) + '0');
		}
		_putchar('\n');
	}
}

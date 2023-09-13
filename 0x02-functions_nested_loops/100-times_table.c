#include "main.h"

/**
 * print_times_table - Prints the times table of the input, starting with 0.
 * @n: The value of the times table.
 */

void print_times_table(int n)
{
	int _numb, _produ, _multi;

	if (n >= 0 && n <= 15)
	{
		for (_numb = 0; _numb <= n; _numb++)
		{
			_putchar('0');

			for (_multi = 1; _multi <= n; _multi++)
			{
				_putchar(',');
				_putchar(' ');

				_produ = _numb * _multi;

				if (_produ <= 99)
					_putchar(' ');
				if (_produ <= 9)
					_putchar(' ');

				if (_produ >= 100)
				{
					_putchar((_produ / 100) + '0');
					_putchar(((_produ / 10)) % 10 + '0');
				}
				else if (_produ <= 99 && _produ >= 10)
				{
					_putchar((_produ / 10) + '0');
				}
				_putchar((_produ % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

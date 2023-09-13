#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0.
 */

void times_table(void)
{
	int r;
	int x;
	int c = 0;

	while (c <= 9)
	{
		r = 0;
		x = 0;

		while (r <= 9 && x <= 9)
		{
			_putchar(r * x);
			r++;
			x++;
		}
		_putchar('\n');
		c++;
	}
}

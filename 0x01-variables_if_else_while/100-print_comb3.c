#include <stdio.h>

/**
 * main - Prints a combination of two digits in a unique manner.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 < 9; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 < 10; dig2++)
		{
			putchar((dig1 % 10) + '0');
			putchar((dig2 % 10) + '0');

			if (dig1 == 8 && dig2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

return (0);
}

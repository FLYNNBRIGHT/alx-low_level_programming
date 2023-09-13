#include "main.h"

/**
 * main - prints 10 times the alphabet in lowercase followed by a new line.
 *
 * Return: Always 0 (Success).
 */

void print_alphabet_x10(void);

int main(void)
{
	int i = 0;

	while (i <= 10)
	{
		char _alphs = 'a';

		while (_alphs <= 'z')
		{
			_putchar(_alphs);
			_alphs++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}

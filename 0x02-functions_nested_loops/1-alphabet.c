#include "main.h"

/**
 * main - prints the alphabet in lower cases followed by a new line.
 *
 * Return: Always 0 (Success).
 */

void print_alphabet(void);

int main(void)
{
	char _alphs = 'a';

	while (_alphs <= 'z')
	{
		_putchar(_alphs);
		_alphs++;
	}
	_putchar('\n');

	return (0);
}

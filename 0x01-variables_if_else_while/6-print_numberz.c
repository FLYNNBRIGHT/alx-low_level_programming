#include <stdio.h>

/**
 * main - Prints all base 10 numbers starting from zero followed by a new line;
 *		without using the char function and the printf function.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');

	return (0);
}

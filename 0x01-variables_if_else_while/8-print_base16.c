#include <stdio.h>

/**
 * main - Prints all base 16 numbers startting from zero without using the
 *		prinff function and using putshar 3times; using for loop.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i;
	char alphs;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (alphs = 'a'; alphs < 'g'; alphs++)
		putchar(alphs);
	putchar('\n');

	return (0);
}

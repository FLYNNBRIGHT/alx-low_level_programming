#include <stdio.h>

/**
 * main - Print alphabets in lower cases and then in uppercases followed by a
 *		new line.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char alphs;

	for (alphs = 'a'; alphs <= 'z'; alphs++)
		putchar(alphs);
	for (alphs = 'A'; alphs <= 'Z'; alphs++)
		putchar(alphs);
	putchar('\n');

	return (0);
}

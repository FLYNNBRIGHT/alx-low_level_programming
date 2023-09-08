#include <stdio.h>

/**
 * main - Prints alphabets using the for loop system.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char alphs;

	for (alphs = 'a'; alphs <= 'z'; alphs++)
		putchar(alphs);
	putchar('\n');

	return (0);
}

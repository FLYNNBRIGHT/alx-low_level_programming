#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase removing 'q' and 'e' using the the
 *		for loop.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char alphs;

	for (alphs = 'a'; alphs <= 'z'; alphs++)
	{
		if (alphs != 'q' && alphs != 'e')
			putchar(alphs);
	}
	putchar('\n');

	return (0);
}

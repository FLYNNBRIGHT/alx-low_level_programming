#include <stdio.h>

/**
 * main - Prints the alphsbets in lowercase in a reverse order using for loops.
 *
 * Return: Always 0(Success).
 */

int main(void)
{
	char r_alphs;

	for (r_alphs = 'z'; r_alphs >= 'a'; r_alphs--)
		putchar(r_alphs);
	putchar('\n');

	return (0);
}

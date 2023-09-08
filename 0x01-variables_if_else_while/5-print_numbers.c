#include <stdio.h>

/**
 * main - Prints all base 10 numbers starting from zero followed by a new line.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}

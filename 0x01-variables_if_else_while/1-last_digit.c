#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Detect the last digit of a randomnized number and indicate if its
 *		less than 6, greater than 5 or Zero.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int n;
	int ls_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ls_d = n % 10;
	if (ls_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
		       n, ls_d);
	}
	else if (ls_d < 6 && ls_d != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, ls_d);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, ls_d);
	}

	return (0);
}

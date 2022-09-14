#include <stdio.h>

/**
 * main - print 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long i, j, k, fib;

	j = 1;
	k = 2;

	printf("%ld, %ld", j, k);

	for (i = 0; i < 50; i++)
	{
		fib = k + j;
		j = k;
		k = fib;

		printf(", %ld", fib);
	}

	printf("\n");

	return (0);
}

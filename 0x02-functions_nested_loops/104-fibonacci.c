#include <stdio.h>

/**
 * main - print 98 fibonacci sequenece numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	double i, j, k, fib;

	j = 1;
	k = 2;

	printf("%.0f, %.0f", j, k);

	for (i = 0; i < 96; i++)
	{
		fib = k + j;
		j = k;
		k = fib;

		printf(", %.0f", fib);
	}

	printf("\n");

	return (0);
}

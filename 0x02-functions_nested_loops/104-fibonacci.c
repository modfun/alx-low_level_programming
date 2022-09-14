#include <stdio.h>
#include <inttypes.h>

/**
 * main - print 98 fibonacci sequenece numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	uint64_t i, j, k, fib;

	j = 1;
	k = 2;

	printf("%"PRIu64", %"PRIu64"", j, k);

	for (i = 0; i < 96; i++)
	{
		fib = k + j;
		j = k;
		k = fib;

		printf(", %"PRIu64"", fib);
	}

	printf("\n");

	return (0);
}

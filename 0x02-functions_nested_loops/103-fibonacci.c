#include <stdio.h>

/**
 * main - print the sum of even-valued fibonacci numbers
 * under 4 milion
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long i, j, fib, s;

	i = 1;
	j = 2;
	fib = 2;
	s = 0;

	while (fib < 4000000)
	{
		if (fib % 2 == 0)
			s += fib;

		fib = j + i;
		i = j;
		j = fib;

	}

	printf("%ld\n", s);

	return (0);
}

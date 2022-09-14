#include <stdio.h>

/**
 * main - print 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long i, j, fib, s;

	i = 1;
	j = 2;
	fib = 0;
	s = 0;

	while (fib < 4000000)
	{
		fib = i + j;
		j = i;
		i = fib;

		if (fib % 2 == 0)
			s += fib;
	}

	printf("%ld\n", s);

	return (0);
}

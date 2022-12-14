#include "main.h"

/**
 * print_number - prints a number
 * @n: an integer variable
 *
 * Description: prints an integer using _putchar function
 */
void print_number(int n)
{
	unsigned int l, m, i, j, div;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	/* find the number of digits in n */
	l = n;
	m = 0;
	if (l == 0)
		m = 1;
	while (l != 0)
	{
		l = l / 10;
		++m;
	}

	/* print n using form (n / 10^t) % 10 such that t is [m-1:1] */
	for (i = m; i > 0; i--)
	{
		div = 1;
		for (j = i - 1; j > 0; j--)
			div *= 10;

		_putchar(((n / div) % 10) + '0');
	}
}

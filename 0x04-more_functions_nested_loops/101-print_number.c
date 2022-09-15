#include "main.h"

/**
 * print_number - prints a number
 * @n: an integer variable
 *
 * Description: prints an integer using _putchar function
 */
void print_number(int n)
{
	long l, m, i, j, div;

	l = n;
	m = 0;
	if (l == 0)
		m = 1;
	while (l != 0)
	{
		l = l / 10;
		++m;
	}

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	for (i = m; i > 0; i--)
	{
		div = 1;
		for (j = i - 1; j > 0; j--)
			div *= 10;

		_putchar(((n / div) % 10) + '0');
	}
}

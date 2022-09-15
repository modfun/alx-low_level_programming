#include "main.h"
#include <stdio.h>

/**
 * print_number - prints a number
 * @n: an integer variable
 *
 * Description: prints an integer using _putchar function
 */
void print_number(int n)
{
	int l, m, i, j, div;

	/* Get the number of digits in n */
	l = n;
	m = 0;
	if (l == 0)
		m = 1;
	while (l != 0)
	{
		l = l / 10;
		++m;
	}
	printf("DDDD: %d: %d: %d\n", m, l, n);

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	/* digits are 10**(m-1) to 10**(1) */
	for (i = m; i > 0; i--)
	{
		div = 1;
		for (j = i - 1; j > 0; j--)
			div *= 10;

		_putchar(((n / div) % 10) + '0');
	}
}

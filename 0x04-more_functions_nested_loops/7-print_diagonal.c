#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: an integer variable for the number of '_' to print
 *
 * Description: draws a diagonal line on the terminal.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('_');
		if (i != n - 1)
			_putchar('\n');
	}
	_putchar('\n');
}

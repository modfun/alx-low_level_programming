#include "main.h"

/**
 * print_number - print a number
 * @n: an integer number
 *
 * Description: a function that prints an integer.
 */
void print_number(int n)
{
	unsigned int number;

	if (n < 0)
	{
		number = -n;
		_putchar('-');
	}
	else
		number = n;

	if (number > 9)
		print_number(number / 10);
	_putchar((number % 10) + '0');
}

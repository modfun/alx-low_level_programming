#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: an integer number
 *
 * Return: an integer number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -1 * (n % 10);
	else
		n = n % 10;
	_putchar(n + '0');
	return (n);
}

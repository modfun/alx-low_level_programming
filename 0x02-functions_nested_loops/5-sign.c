#include "main.h"

/**
 * print_sign - print the sign of a number (+, -)
 * @n: an integer number
 *
 * Return: one, zero or negative one
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}

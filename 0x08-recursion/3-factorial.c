#include "main.h"

/**
 * factorial - factorial of a number.
 * @n: a positive integer
 *
 * Description: a function to get the factorial of a number such that (n!)
 * Return: factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

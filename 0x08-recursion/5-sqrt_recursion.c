#include "main.h"

int square_root(int, int);

/**
 * _sqrt_recursion - square root
 * @n: an integer number
 *
 * Description: a function to return the square root of (n).
 * Return: square root of (n).
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}

/**
 * square_root - find a square root using bisection search
 * @n: number.
 * @g: guess.
 *
 * Return: square root of (n).
 */
int square_root(int n, int g)
{
	if (g * g > n)
		return (-1);
	if (g * g == n)
		return (g);
	return (square_root(n, g + 1));
}

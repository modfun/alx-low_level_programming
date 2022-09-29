#include "main.h"

/**
 * _pow_recursion - the power function
 * @x: integer base
 * @y: integer exponent
 *
 * Description: a function to return the power of x raised by y.
 * Return: a positive integer.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

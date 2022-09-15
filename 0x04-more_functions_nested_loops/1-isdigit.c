#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: an int variable
 *
 * Description: checks if a character is a digit and returns
 * a boolean.
 * Return: zero or one (False / True)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

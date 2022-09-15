#include "main.h"

/**
 * _isupper - checks for uppercase letter
 * @c: a int variable
 *
 * Description: checks for uppercase letters [A-Z]
 * Return: zero or one (True / False)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

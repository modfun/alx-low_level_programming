#include "main.h"

/**
 * _isupper - checks for uppercase letter
 * Description: checks for uppercase letters [A-Z]
 * @c: a int variable
 *
 * Return: zero or one (True / False)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

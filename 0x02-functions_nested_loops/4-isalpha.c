#include "main.h"

/**
 * _isalpha - checks if the char is alphabetical
 * @c:	a variable holding an int value representing char
 *
 * Return: zero or one (True / False)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

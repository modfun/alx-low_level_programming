#include "main.h"

/**
 * islower - checks a char type to be lowercase
 * @c: a variable of type char
 *
 * Return: zero or one (True / False)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _strlen_recursion - return length of str
 * @s: a pointer to string
 *
 * Description: a function to return the string length recursivly
 * Return: length of str as integer
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

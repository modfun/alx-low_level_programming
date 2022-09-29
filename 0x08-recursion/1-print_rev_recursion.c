#include "main.h"

/**
 * _print_rev_recursion - print revesivly recursivly
 * @s: a pointer to string
 *
 * Description: a function to print in reverse a string recursivly
 */
void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

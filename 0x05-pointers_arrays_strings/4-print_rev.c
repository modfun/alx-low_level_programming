#include "main.h"

/**
 * print_rev -
 * @s: a pointer to string
 *
 * Description: a function that prints a string, in reverse,
 * followed by a new line.
 */
void print_rev(char *s)
{
	int count = 0;
	int i = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

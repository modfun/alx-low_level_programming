#include "main.h"

/**
 * print_alphabet - print the alphabet in a line
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c++);
	}
	_putchar('\n');
	return;
}

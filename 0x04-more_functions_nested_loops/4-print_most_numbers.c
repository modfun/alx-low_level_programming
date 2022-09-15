#include "main.h"

/**
 * print_most_numbers - print most numbers [0-9]
 *
 * Description: print numbers from zero to nine
 * except for two and four.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}

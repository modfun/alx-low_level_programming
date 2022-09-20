#include "main.h"

/**
 * puts2 - print string
 * @str: a pointer to string
 *
 * Description: Write a function that prints every other character
 * of a string, starting with the first character, followed by a new line.
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

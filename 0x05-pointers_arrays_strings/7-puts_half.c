#include "main.h"

/**
 * puts_half - print half
 * @str: a pointer to string
 *
 * Description: a function that prints half of a string, followed by
 * a new line.
 */
void puts_half(char *str)
{
	int count = 0;
	int i;

	while (*(str + count) != '\0')
	{
		count++;
	}

	if (count % 2 == 0)
		i = count / 2;
	else
		i = (count / 2) + 1;

	for (; i < count; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}



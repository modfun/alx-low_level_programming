#include "main.h"

/**
 * rev_string - reverse a string
 * @s: a pointer to string
 *
 * Description: a function that reverses a string.
 */
void rev_string(char *s)
{
	int count = 0;
	int i = 0;
	char tmp;

	while (*(s + count) != '\0')
	{
		count++;
	}

	for (i = 0; i < (count / 2); i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + (count - i - 1));
		*(s + (count - i - 1)) = tmp;
	}
}

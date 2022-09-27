#include "main.h"
#include <stddef.h>

/**
 * _strchr - find a char in string
 * @s: a string
 * @c: a character
 *
 * Description: a function that locates a character in a string.
 * Return: a pointer to the first occurence of (c) or NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}

#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - search a string
 * @s: a string
 * @accept: a set to search for
 *
 * Description: a function that searches a string for any of a set of bytes.
 * Return: a pointer to found member of accept of NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}

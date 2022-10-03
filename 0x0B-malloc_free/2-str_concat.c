#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * str_concat - string concatenation using malloc()
 * @s1: a pointer to string.
 * @s2: a pointer to string.
 *
 * Description: a function that concatenates two strings.
 * Return: a string or NULL if fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, size = 0, size1 = 0, size2 = 0;

	if (s1 == NULL && s2 == NULL)
		size = 0;
	else if (s1 == NULL)
	{
		size = strlen(s2);
		size2 = size;
	}
	else if (s2 == NULL)
	{
		size = strlen(s1);
		size1 = size;
	}
	else
	{
		size1 = strlen(s1);
		size2 = strlen(s2);
		size = size1 + size2;
	}

	p = malloc(size + 1);
	if (p == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < size1; i++)
			p[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (i = size1; i < size; i++)
			p[i] = s2[i - size1];
	}
	p[size] = '\0';

	return (p);
}

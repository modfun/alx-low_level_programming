#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - string duplicate
 * @str: a pointer to string.
 *
 * Description: a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * Return: a pointer to duplicated string or NULL if fails.
 */
char *_strdup(char *str)
{
	int i;
	char *p;
	int size;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	p = malloc(size * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = str[i];
	p[size] = '\0';

	return (p);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>

char *getNbytes(char *s2, unsigned int n);

/**
 * string_nconcat - string concatenation of n bytes
 * @s1: a pointer to string
 * @s2: a pointer to string
 * @n: number of bytes of s2 to use
 *
 * Description: a function that concatenates two strings.
 * Return: a pointer to string or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *constr;

	if (s1 == NULL && s2 == NULL)
	{
		constr = malloc(1);
		if (constr == NULL)
			return (NULL);
		constr[0] = '\0';
		return (constr);
	}
	else if (s1 == NULL)
		return (n < strlen(s2) ? getNbytes(s2, n) : getNbytes(s2, strlen(s2)));
	else if (s2 == NULL)
		return (getNbytes(s1, strlen(s1)));

	if (n > strlen(s2))
		n = strlen(s2);
	constr = malloc(strlen(s1) + n + 1);
	if (constr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		constr[i] = s1[i];
	for (i = 0; i < n; i++)
		constr[strlen(s1) + i] = s2[i];
	constr[strlen(s1) + n] = '\0';

	return (constr);
}

/**
 * getNbytes - get (n) number of bytes from string
 * @s: a pointer to string
 * @n: number of bytes
 *
 * Return: a pointer to string.
 */
char *getNbytes(char *s, unsigned int n)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		ptr[i] = s[i];
	ptr[i] = '\0';

	return (ptr);
}

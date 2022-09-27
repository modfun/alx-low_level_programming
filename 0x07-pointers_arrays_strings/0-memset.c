#include "main.h"

/**
 * _memset - set memory with a constant
 * @s: a pointer to memory area
 * @b: a constant byte
 * @n: number of bytes to fill.
 *
 * Description: a function that fills memory with a constant byte.
 * Return: a pointer to char string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

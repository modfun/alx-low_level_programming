#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: a pointer to dest string
 * @src: a pointer to src string
 * @n: number of bytes to be copied
 *
 * Description: function should work exactly like strncpy (man strncpy).
 * Return: a pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

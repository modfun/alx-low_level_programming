#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate a string
 * @dest: a pointer to dest string
 * @src: a pointer to source string
 * @n: number of bytes in source to be concatenated
 *
 * Description: The _strncat function is similar to _strcat function, except
 * that it will use at most n bytes from src; and src does not need to be
 * null-terminated if it contains n or more bytes.
 * Return: a pointer to dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destLen = strlen(dest);
	int srcLen = strlen(src);
	int i;

	if (n > srcLen)
		n = srcLen;
	for (i = destLen; i < destLen + n; i++)
		dest[i] = src[i - destLen];

	return (dest);
}

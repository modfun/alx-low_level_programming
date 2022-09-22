#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate a string
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and
 * then adds a terminating null byte.
 * Return: a pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	int destCount = strlen(dest);
	int srcCount = strlen(src);
	int i;

	for (i = destCount; i < (destCount + srcCount); i++)
	{
		dest[i] = src[i - destCount];
	}

	return (dest);
}

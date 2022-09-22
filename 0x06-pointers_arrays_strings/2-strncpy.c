#include "main.h"
#include <string.h>

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
	int destLen = strlen(dest);
	int srcLen = strlen(src);
	int i;

	if (n > srcLen)
		n = srcLen;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\n')
		{
			dest[i + 1] = '\0';
			break;
		}
	}
	if (destLen < srcLen)
		dest[i] = '\0';

	return (dest);
}

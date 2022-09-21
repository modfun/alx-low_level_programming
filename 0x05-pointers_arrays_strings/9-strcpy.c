#include "main.h"

/**
 * _strcpy - copys a string
 * @dest: a pointer to char destination string
 * @src: a pointer to char source string
 *
 * Description:  a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * Return: a pointer to char (dest).
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		*(dest + i) = *(src + i);

		if (*(src + i) == '\0')
			break;
		i++;
	}

	return (dest);
}

#include "main.h"

/**
 * _strlen - get the length of string
 * @s: a pointer to string
 *
 * Description: a function to return a strings length
 * Return: an int value
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while( *(s + i) != '\0')
	{
		count++;
		i++;
	}

	return (count);
}

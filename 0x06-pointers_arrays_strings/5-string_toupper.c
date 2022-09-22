#include "main.h"

/**
 * string_toupper - uppercase a string
 * @s: a pointer to string
 *
 * Description: a function that changes all lowercase letters of a string
 * to uppercase.
 * Return: a pointer to string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] + ('A' - 'a' - 0);
		i++;
	}

	return (s);
}

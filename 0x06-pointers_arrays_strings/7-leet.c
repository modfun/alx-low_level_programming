#include "main.h"

/**
 * leet - encrypt a string
 * @s: a pointer to string.
 *
 * Description: a function that encodes a string into 1337.
 * Return: a pointer to string.
 */
char *leet(char *s)
{
	int i = 0;
	int k;
	int sep[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};

	while (s[i] != 0)
	{
		k = 0;
		while (k < 8)
		{
			if (s[i] == sep[k] || s[i] == (sep[k] - 32))
				s[i] = '0' + k;
			k++;
		}
		i++;
	}

	return (s);
}

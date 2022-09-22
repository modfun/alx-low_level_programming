#include "main.h"

/**
 * rot13 - encrypt using rot13
 * @s: a pointer to string
 *
 * Description: a function that encodes a string using rot13.
 * Return: a pointer to string
 */
char *rot13(char *s)
{
	int i = 0;
	int k = 0;
	int rot[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',\
		'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',\
		'X', 'Y', 'Z'};

	while (s[i] != 0)
	{
		k = 0;
		while (k < 27 && ((s[i] >= 'a' && s[i] <= 'z') ||\
					(s[i] >= 'A' && s[i] <= 'Z')))
		{
			if (s[i] == rot[k] || s[i] == (rot[k] + 32))
			{
				s[i] = rot[(k + 14) % 27] + (s[i] - rot[k]);
			}
			k++;
		}
		i++;
	}

	return (s);
}

#include "main.h"

/**
 * _strspn - get length of substring
 * @s: a string
 * @accept: substring
 *
 * Description: a function that gets the length of a prefix substring.
 * Return: length of substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;
	short finish;

	for (i = 0; s[i] != 0; i++)
	{
		finish = 0;
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				finish = 1;
			}
		}
		if (!finish)
			return (count);
	}

	return (count);
}

#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Description: function should work exactly like strcmp.
 * Return: zero if s1, s2 are equal OR negative if s1 < s2
 * OR positive if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i = 0;

	while (i <= len1 && i <= len2)
	{
		if (s1[i] - s2[i] == 0)
		{
			i++;
			continue;
		}
		return (s1[i] - s2[i]);
	}
	return (0);
}

#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strstr - locate a substring
 * @haystack: string to search
 * @needle: substring to find
 *
 * Description: a function that locates a substring.
 * Return: a pointer to the located substring or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int hay_len = strlen(haystack);
	int nee_len = strlen(needle);
	int i, j;
	int flag;

	if (nee_len == 0)
		return (haystack);
	if (nee_len > hay_len)
		return (NULL);
	else if (nee_len == hay_len)
	{
		for (i = 0; needle[i] != 0; i++)
		{
			if (needle[i] != haystack[i])
				return (NULL);
		}
		return (haystack + 0);
	}
	for (i = 0; i <= (hay_len - nee_len) && haystack[i] != 0; i++)
	{
		if (haystack[i] == needle[0])
		{
			flag = 0;
			for (j = 0; needle[j] != '\0'; j++)
			{

				if (haystack[i + j] == needle[j])
					flag = 1;
				else
				{
					flag = 0;
					break;
				}
			}
			if (flag)
				return (haystack + i);
		}
	}

	return (NULL);
}

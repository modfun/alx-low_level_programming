#include "main.h"

/**
* wildcmp - compare two strings
* @s1: a pointer to string
* @s2: a pointer to string
*
* Description: a function to compare two strings allowing use of wildcard.
* Return: 1 (true) or 0 (false).
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
return (0);
}

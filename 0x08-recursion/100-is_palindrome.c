#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * is_palindrome - is palindrome ?
 * @s: a pointer to string
 *
 * Description: a function to return if a string is palindrome.
 * Return: 1 (true) or 0 (false)
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	char buf[1000];

	if (*(s) != s[len - 1])
		return (0);
	if (len <= 1)
		return (1);

	memcpy(buf, s + 1, len - 2);
	buf[len - 2] = '\0';
	/* printf("%d\n", len); */
	/* puts(buf); */
	return (is_palindrome(buf));
}

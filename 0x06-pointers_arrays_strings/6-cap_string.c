#include "main.h"

/**
 * cap_string - captitalize all words in string
 * @str: a poniter to string
 *
 * Description: a function that capitalizes all words of a string.
 * Separators: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 * Return: a pointer to string
 */
char *cap_string(char *str)
{
	int i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	while (str[i] != 0)
	{
		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (str[i + 1] != 0)
				{
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
						str[i + 1] = str[i + 1] + ('A' - 'a' - 0);
				}
				break;
			default:
				break;
		}
		i++;
	}

	return (str);
}

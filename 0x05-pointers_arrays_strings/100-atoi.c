#include "main.h"

/**
 * _atoi - convert number form string to integer
 * @s: a pointer to string
 *
 * Description: a function that convert a string to an integer.
 * Return: an int value
 */
int _atoi(char *s)
{
	int i = 0, minus = 0, num = 0;
	int lastNumber = 0;
	int digit;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			minus++;
		i++;
	}
	if (minus % 2 != 0)
		minus = -1;
	else
		minus = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			lastNumber = 1;
			digit = s[i] - 48;
			num = (num * 10) + digit;
		}
		else if (lastNumber == 1)
			break;
	}

	return (num * minus);
}

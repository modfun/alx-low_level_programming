#include "main.h"
#include <stdio.h>

/**
 * _atoi -
 * @s: a pointer to string
 *
 * Description:
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
			printf("D: digit=%d of %c\n", digit, s[i]);
			num = (num * 10) + digit;
		}
		else if (lastNumber == 1)
			break;
	}

	return (num * minus);
}

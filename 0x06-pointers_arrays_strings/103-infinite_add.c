#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: a pointer to string
 *
 * Description: a function that reverses a string.
 */
void rev_string(char *s)
{
	int count = 0;
	int i = 0;
	char tmp;

	while (*(s + count) != '\0')
		count++;

	for (i = 0; i < (count / 2); i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + (count - i - 1));
		*(s + (count - i - 1)) = tmp;
	}
}

/**
 * infinite_add - add two numbers
 * @n1: a pointer to number one
 * @n2: a pointer to number two
 * @r: a pointer to the buffer
 * @size_r: the buffer size
 *
 * Description: a function that adds two numbers.
 * Return: a pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int d1, d2;
	int i = 0;

	rev_string(n1);
	rev_string(n2);

	while (i < len1 || i < len2 || carry != 0)
	{
		if (i >= len1)
			d1 = 0;
		else
			d1 = n1[i];
		if (i >= len2)
			d2 = 0;
		else
			d2 = n2[i];

		if (i >= size_r)
			return (0);
		r[i] = (d1 + d2 + carry) % 10;
		carry = (d1 + d2 + carry) / 10;

		i++;
	}
	if (i < size_r)
		r[i] = '\0';

	rev_string(n1);
	rev_string(n2);
	rev_string(r);

	return(r);
}

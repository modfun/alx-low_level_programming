#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * strrev - reverse a string
 * @s: a pointer to string
 *
 * Description: a function to reverse a string
 * Return: a pointer to string
 */
char *strrev(char *s)
{
	int i, tmp = 0;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (i = 0; i < (len / 2); i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + (len - i - 1));
		*(s + (len - i - 1)) = tmp;
	}

	return (s);
}

/**
 * infinite_add - add numbers in strings
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 *
 * Description: a function that adds two numbers.
 * Return: a pointer to string (r).
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char nOne[10000];
	char nTwo[10000];
	int d1, d2, i;
	int carry = 0;
	int n1_len = strlen(n1);
	int n2_len = strlen(n2);

	strcpy(nOne, n1);
	strcpy(nTwo, n2);
	strrev(nOne);
	strrev(nTwo);

	i = 0;
	while (i < n1_len || i < n2_len || carry != 0)
	{
		d1 = 0;
		d2 = 0;
		if (i < n1_len)
			d1 = nOne[i] - '0';
		if (i < n2_len)
			d2 = nTwo[i] - '0';
		if (size_r - 1 <= i)
			return (0);

		r[i] = ((d1 + d2 + carry) % 10) + '0';
		carry = (d1 + d2 + carry) / 10;

		i++;
	}
	r[size_r - 1] = '\0';

	strrev(r);
	return (r);
}

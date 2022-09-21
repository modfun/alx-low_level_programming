#include <stdio.h>
#include "main.h"

/**
 * print_array - print an array
 * @a: a pointer to an array of int(s)
 * @n: an int value of the array size
 *
 * Description: a function that prints n elements of an array of integers,
 * followed by a new line.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{

		if (i >= (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}

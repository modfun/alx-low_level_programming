#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of int's
 * @min: a minmum number
 * @max: a maximum number
 *
 * Description: a function that creates an array of integers.
 * Return: a pointer to an array of integers or NULL if fails.
 */
int *array_range(int min, int max)
{
	int i, n;
	int *ptr;

	if (max < min)
		return (NULL);
	n = (max - min) + 1;

	ptr = malloc(sizeof(*ptr) * n);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		*(ptr + i) = i + min;

	return (ptr);
}

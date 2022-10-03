#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * alloc_grid - allocate a two dimensional array
 * @width: the grid width
 * @height: the grid height
 *
 * Description: a function that returns a pointer to a 2 dimensional
 * array of integers.
 * Return: a pointer to array of arrays or NULL otherwise.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **p;

	p = malloc(height);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width);
		if (p[i] == NULL)
			return (NULL);
	}

	return (p);
}

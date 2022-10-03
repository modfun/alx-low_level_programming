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
	int i, j;
	int **p;

	if (height == 0 && width == 0)
		return (NULL);

	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (i -= 1; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}

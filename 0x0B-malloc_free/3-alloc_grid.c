#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

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

	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		printf("[Debug] i = %d\n", i);
		for (j = 0; j < width; j++)
		{
			printf("[Debug] j = %d\n", j);
			p[i][j] = 0;
		}
	}

	return (p);
}

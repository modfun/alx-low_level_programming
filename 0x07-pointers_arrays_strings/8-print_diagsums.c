#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonals
 * @a: the matrix
 * @size: the size
 *
 * Description: a function that prints the sum of the two diagonals of
 * a square matrix of integers.
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int inc_diag = 0;
	int dec_diag = 0;
	int current_cell;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			current_cell = *(a + (i * size + j));
			if (i == j)
				dec_diag += current_cell;
			if ((i + j) == (size - 1))
				inc_diag += current_cell;
		}
	}

	printf("%d, %d\n", dec_diag, inc_diag);
}

#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: int variable to the triangle's size to be printed
 *
 * Description: prints a triangle, followed by a new line.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i + j >= size - 1)
				_putchar('#');
			else
				_putchar(' ');
		}

		_putchar('\n');
	}

	if (size < 1)
		_putchar('\n');
}

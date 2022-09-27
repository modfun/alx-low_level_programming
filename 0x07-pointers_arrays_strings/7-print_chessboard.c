#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print chessboard
 * @a: a pointer to array of 8 characters
 *
 * Description: a function that prints the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}

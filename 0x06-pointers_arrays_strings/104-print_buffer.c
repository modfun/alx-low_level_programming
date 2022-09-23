#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_buffer - print a buffer to stdout
 * @b: a pointer to string
 * @size: the size to be printed
 *
 * Description: a function that prints a buffer.
 */
void print_buffer(char *b, int size)
{
	int c, d;

	if (size <= 0)
		printf("\n");

	c = 0;
	while (c < size)
	{
		printf("%8.8x: ", c);
		d = 0;
		while (d < 10)
		{
			if (c + d < size)
				printf("%02x", b[c + d]);
			else
				printf("  ");

			if (d % 2 != 0)
				printf(" ");
			d++;
		}
		d = 0;
		while (d < 10)
		{
			if (c + d < size)
			{
				if (b[c + d] < ' ')
					printf(".");
				else
					printf("%c", b[c + d]);
			}
			d++;
		}
		printf("\n");

		c += 10;
	}
}

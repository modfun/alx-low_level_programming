#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Usage: ./main number_of_bytes
 * @ac: argument count
 * @av: argument vector
 *
 * Description: a program that prints the opcodes of its own main function.
 * Return: 0 (Success) or 1 (ac Error) or 2 (negative number of bytes).
 */
int main(int ac, char **av)
{
	int i;
	int bytes;
	int (*m)(int, char **) = &main;
	char *opstring = (char *)m;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(av[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes - 1; i++)
		printf("%02hhx ", opstring[i]);
	printf("%02hhx", opstring[i]);
	putchar('\n');

	return (0);
}

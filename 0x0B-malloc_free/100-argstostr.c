#include "main.h"
#include <stdlib.h>

/**
 * argstostr - convert program arguments to a string
 * @ac: argument count
 * @av: argument vector
 *
 * Description: a function that concatenates all the arguments of your program.
 * Return: a pointer to string or NULL for failure.
 */
char *argstostr(int ac, char **av)
{
	int i, j, size, count;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
			size++;	/* for every char */
		size++;		/* for '\n' */
	}

	p = malloc(size * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);

	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			p[count] = av[i][j];
			count++;
		}
		p[count] = '\n';
		count++;
	}
	p[count] = '\0';

	return (p);
}

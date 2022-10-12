#include "3-calc.h"
#include <stdio.h>

/**
 * main - Entry Point
 * @ac: argument count
 * @av: argument vector
 *
 * Return: zero (Success) or 98 (ac error) or 99 (op invalid)
 * or 100 (div or mod zero)
 */
int main(int ac, char **av)
{
	int a, b, res;
	int (*f)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(av[2]);
	if (f == NULL || av[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);
	res = (*f)(a, b);
	printf("%d\n", res);

	return (0);
}

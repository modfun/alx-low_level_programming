#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: count of arguments
 * @argv: vector of arguments
 *
 * Description: add numbers in argument vector and print result.
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc < 2)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

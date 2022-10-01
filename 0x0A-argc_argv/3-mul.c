#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: count of arguments
 * @argv: vector of arguments
 *
 * Description: multiply two numbers and print result.
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = (atoi(argv[1])) * (atoi(argv[2]));
	printf("%d\n", result);

	return (0);
}

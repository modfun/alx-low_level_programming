#include <stdio.h>
#include <stdlib.h>

int isNumber(char *s);

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
		if (isNumber(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

/**
 * isNumber - is the stirng a number
 * @s: a pointer to string
 *
 * Description: only checks if string is digits (doesn't account for - or +)
 * Return: 1 (true) or 0 (false)
 */
int isNumber(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			continue;
		else
			return (0);
	}
	return (1);
}

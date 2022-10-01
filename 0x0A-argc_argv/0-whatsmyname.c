#include <stdio.h>

/**
 * main - Entry Point
 * @argc: count of arguments
 * @argv: vector of arguments
 *
 * Description: print the name of the program
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}

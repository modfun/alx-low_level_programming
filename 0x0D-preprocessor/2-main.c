#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: a program that prints the name of the file it was compiled
 * from, followed by a new line.
 * Return: Always zero (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}

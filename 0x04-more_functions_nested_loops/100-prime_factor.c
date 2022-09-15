#include <stdio.h>

/**
 * main - print largest prime factor of a number
 *
 * Description: prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	long current, target;

	target = 612852475143;

	for (current = 2; current < target; current++)
	{
		while (target % current == 0)
		{
			target = target / current;
		}
	}
	printf("%lu\n", current);

	return (0);
}

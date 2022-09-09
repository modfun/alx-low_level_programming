#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens, ones;

	for (tens = 48; tens < 58; tens++)
	{
		for (ones = 48; ones < 58; ones++)
		{
			if (tens < ones)
			{
				putchar(tens);
				putchar(ones);

				if (tens != 56 && ones <= 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

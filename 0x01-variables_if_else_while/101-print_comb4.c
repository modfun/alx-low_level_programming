#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hunds, tens, ones;

	for (hunds = 48; hunds < 58; hunds++)
	{
		for (tens = 48; tens < 58; tens++)
		{
			for (ones = 48; ones < 58; ones++)
			{
				if (hunds < tens && tens < ones && hunds < ones)
				{
					putchar(hunds);
					putchar(tens);
					putchar(ones);

					if (hunds != 55 && tens <= 56 && ones <= 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

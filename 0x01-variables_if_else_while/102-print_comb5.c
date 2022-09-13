#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
**/
int main(void)
{
	int n1, n2;
	n1 = 0;

	while (n1 <= 98)
	{
		n2 = n1 + 1;

		while (n2 <= 99)
		{
			putchar(n1 / 10 % 10 + '0');
			putchar(n1 % 10 + '0');
			putchar(' ');
			putchar(n2 / 10 % 10 + '0');
			putchar(n2 % 10 + '0');

			if (n1 == 98 && n2 == 99)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}

			n2++;
		}

		n1++;
	}

	return (0);
}

#include <stdio.h>

/**
 * main - print 98 fibonacci sequenece numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	unsigned long int fnum_1 = 0, bnum_1 = 1, fnum_2 = 0, bnum_2 = 2;
	unsigned long int tmp_f, tmp_b, tmp;
	int i;
	const unsigned long int BIG = 10000000000;

	printf("%lu, %lu", bnum_1, bnum_2);

	for (i = 2; i < 98; i++)
	{
		if (fnum_1 > 0 || fnum_2 > 0 || (bnum_2	+ bnum_1) > BIG)
		{
			tmp_f = (bnum_2	+ bnum_1) / BIG;
			tmp_b = (bnum_2 + bnum_1) % BIG;
			tmp = tmp_f + (fnum_2 + fnum_1);
			fnum_1 = fnum_2;
			fnum_2 = tmp;

			bnum_1 = bnum_2;
			bnum_2 = tmp_b;

			printf(", %lu%lu", fnum_2, bnum_2);
		}
		else
		{
			tmp = bnum_2 + bnum_1;
			bnum_1 = bnum_2;
			bnum_2 = tmp;

			printf(", %lu", bnum_2);
		}
	}

	printf("\n");

	return (0);
}

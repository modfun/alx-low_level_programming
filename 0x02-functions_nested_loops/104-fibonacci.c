#include <stdio.h>

/**
 * main - print 98 fibonacci sequenece numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int fnum_1 = 0, bnum_1 = 1, fnum_2 = 0, bnum_2 = 2;
	unsigned long int tmp1, tmp2, tmp3;
	const unsigned long int BIG = 10000000000;
	int i;

	printf("%lu, %lu, ", bnum_1, bnum_2);
	for (i = 2; i < 98; i++)
	{
		if (bnum_1 + bnum_2 > BIG || fnum_2 > 0 || fnum_1 > 0)
		{
			tmp1 = (bnum_1 + bnum_2) / BIG;
			tmp2 = (bnum_1 + bnum_2) % BIG;
			tmp3 = fnum_1 + fnum_2 + tmp1;
			fnum_1 = fnum_2, fnum_2 = tmp3;
			bnum_1 = bnum_2, bnum_2 = tmp2;
			printf("%lu%010lu", fnum_2, bnum_2);
		}
		else
		{
			tmp2 = bnum_1 + bnum_2;
			bnum_1 = bnum_2, bnum_2 = tmp2;
			printf("%lu", bnum_2);
		}
		if (i != 97)
			printf(", ");
	}

	printf("\n");

	return (0);
}

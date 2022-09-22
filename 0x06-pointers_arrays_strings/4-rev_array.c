#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: a pointer to array
 * @n: number of elements
 *
 * Description: a function that reverses the content of an array of integers.
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

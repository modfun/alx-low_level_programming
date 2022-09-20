#include "main.h"

/**
 * swap_int - swap two ints
 * @a: a pointer to int type
 * @p: a pointer to int type
 *
 * Description: swaps the values of two integers.
 */
void swap_int(int *a, int *p)
{
	int tmp = *a;
	*a = *p;
	*p = tmp;
}

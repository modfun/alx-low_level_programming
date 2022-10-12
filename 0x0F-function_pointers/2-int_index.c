#include "function_pointers.h"

/**
 * int_index - get index of integer
 * @array: a poninter to an array of integers
 * @size: array size
 * @cmp: a pointer to function of signature int f(int)
 *
 * Description: a function that searches for an integer.
 * Return: index of the integer otherwise return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}

	return (-1);
}

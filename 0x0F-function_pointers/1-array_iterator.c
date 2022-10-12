#include "function_pointers.h"

/**
 * array_iterator - iterates over an array
 * @array: an array of integers
 * @size: array size
 * @action: iterator of signature void (*f)(int)
 *
 * Description: a function that executes a function given as a parameter on
 * each element of an array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}

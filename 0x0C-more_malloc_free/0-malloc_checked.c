#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - use malloc() and check for error
 * @b: number of bytes to allocate
 *
 * Description: a function that allocates memory using malloc.
 * Return: a pointer to the allocated memory of 98 for failure.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

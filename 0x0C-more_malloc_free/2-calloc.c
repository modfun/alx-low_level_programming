#include "main.h"
#include <stdlib.h>

/**
 * _calloc - implement calloc() using malloc()
 * @nmemb: number of memory elements.
 * @size: size_t of elements
 *
 * Description: a function that allocates memory for an array, using malloc.
 * Return: a pointer to allocated memory or NULL if fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int bytes;

	if (nmemb == 0 || size == 0)
		return (NULL);

	bytes = nmemb * size;
	if (bytes / nmemb != size)
		return (NULL);

	ptr = malloc(bytes);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

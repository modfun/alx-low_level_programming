#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a block of memory
 * @ptr: a pointer to an allocated memory block
 * @old_size: the size of ptr
 * @new_size: the size requested for ptr
 *
 * Description: a function that reallocates a memory block
 * using malloc and free
 * Return: a pointer to newly allocated block of memory or NULL if fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, size = 0;
	char *p = NULL;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	if (old_size < new_size)
		size = old_size;
	else
		size = new_size;

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = ((char *)ptr)[i];
	free(ptr);

	return (p);
}

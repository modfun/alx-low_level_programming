#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - create an arrary of dynamic size.
 * @size: unsigned int of the number of bytes.
 * @c: char to initialize the array with.
 *
 * Description: a function that creates an array of chars, and initializes
 * it with a specific char.
 * Return: a pointer to the allocate array or NULL if falis.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);

}

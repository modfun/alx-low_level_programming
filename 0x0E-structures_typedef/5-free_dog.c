#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free a dog forever
 * @d: a pointer to dog_t
 *
 * Description: a function that frees dogs.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
			free(d->name);
		if ((*d).owner != NULL)
			free(d->owner);
		free(d);
	}
}


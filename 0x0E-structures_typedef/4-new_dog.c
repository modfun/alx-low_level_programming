#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - allocate a new doggy
 * @name: a string of doggy's name
 * @age: the great time of mr\D
 * @owner: the string address of food specialist
 *
 * Description: a function that creates a new dog.
 * Return: a pointer to dog_t or NULL if failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc(strlen(name) + 1);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	strcpy(p->name, name);

	p->age = age;

	p->owner = malloc(strlen(owner) + 1);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	strcpy(p->owner, owner);

	return (p);
}

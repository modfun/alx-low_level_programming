#include "dog.h"

/**
 * init_dog - initialize struct dog object
 * @d: a pointer to struct dog
 * @name: a pointer to string
 * @age: a float
 * @owner: a pointer to string
 *
 * Description: a function that initialize a variable of type struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

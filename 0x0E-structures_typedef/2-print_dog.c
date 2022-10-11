#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print object of type struct dog
 * @d: a pointer to struct dog structure
 *
 * Description: a function that prints a struct dog.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}

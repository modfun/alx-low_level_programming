#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Woof Woof!
 * @name: a string to name doggy
 * @age: age of fluffiness
 * @owner: name of the Hooman!
 *
 * Description: doggy or puppy all are welcome!
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

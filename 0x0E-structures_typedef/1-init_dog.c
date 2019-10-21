#include "dog.h"
/**
 * init_dog - initialize a variable of type structure
 * @d: the direction of the structure
 * @name: name of the pup
 * @age: How old is the doggy
 * @owner: owner of the puppy
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

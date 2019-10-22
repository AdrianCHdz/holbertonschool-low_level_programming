#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the dog
 * @d: the pointer to the struct
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _slen - gets the lenght of the string
 * @n: the string to be valued
 * Return: the lenght
 */
int _slen(char *n)
	return ((*n != '\0') ? 1 + _slen(n + 1) : 0);

/**
 * new_dog - creates a new structure
 * @name: the name of the new puppy
 * @age: the age of the puppy
 * @owner: the name of the new owner
 * Return: the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *newname, *newowner;
	int i = 0;

	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
		return (NULL);
	newname = malloc(_slen(name));
	if (newname != NULL)
	{
		while (i < _slen(name))
		{
			newname[i] = name[i];
			i++;
		}
	}
	else
	{
		free(ndog);
		return (NULL);
	}
	newowner = malloc(_slen(owner));
	if (newowner != NULL)
	{
		i = 0;
		while (i < _slen(owner))
		{
			newowner[i] = owner[i];
			i++;
		}
	}
	else
	{
		free(newname);
		free(ndog);
		return (NULL);
	}
	ndog->name = newname;
	ndog->age = age;
	ndog->owner = newowner;
	return (ndog);
}

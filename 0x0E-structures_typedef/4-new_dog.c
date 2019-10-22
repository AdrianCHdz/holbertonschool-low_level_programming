#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - prints the pointer to a new space in memory which is the copy.
 * @str: the pointer to the string.
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int a = 0;
	int b = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[a] != '\0')
	{
		a++;
	}
	copy = malloc((sizeof(char) * a) + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	while (str[b] != '\0')
	{
		copy[b] = str[b];
		b++;
	}
	return (copy);
}
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

	ndog = malloc(sizeof(struct dog));
	if (ndog != NULL)
	{
		newname = malloc(sizeof(name));
		if (newname == NULL)
		{
			free(ndog);
			return (NULL);
		}
		newowner = malloc(sizeof(owner));
		if (newowner == NULL)
		{
			free(ndog);
			free(newname);
			return (NULL);
		}
		newname = _strdup(name);
		newowner = _strdup(owner);
		ndog->name = newname;
		ndog->age = age;
		ndog->owner = newowner;
		return (ndog);
	}
	else
		return (NULL);
}

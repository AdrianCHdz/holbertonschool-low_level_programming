#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _slen(char *n)
{
	return ((*n != '\0') ? 1 + _slen(n + 1) : 0);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *newname, *newowner;
	int i = 0;

	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
		return (NULL);
	newname = malloc(_slen(name));
	printf("%d", _slen(name));
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
	newowner = malloc (_slen(owner));
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
	return ndog;
}

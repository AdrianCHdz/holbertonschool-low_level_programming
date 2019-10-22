#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _slen - gets the lenght of the string
 * @n: the string to be valued
 * Return: the lenght
 */
int _slen(char *n)
{
	return ((*n != '\0') ? 1 + _slen(n + 1) : 0);
}
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
		return ('\0');
	}
	while (str[a] != '\0')
	{
		a++;
	}
	copy = malloc((sizeof(char) * a) + 1);
	if (copy == NULL)
	{
		return ('\0');
	}
	while (b < a)
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
	if (ndog == NULL)
		return (NULL);

	newname = _strdup(name);
	if (newname == NULL)
	{
		free(ndog);
		return (NULL);
	}
	newowner = _strdup(owner);
	if (newowner == NULL)
	{
		free(_strdup(name));
		free(ndog);
		return (NULL);
	}
	ndog->name = newname;
	ndog->age = age;
	ndog->owner = newowner;
	return (ndog);
}

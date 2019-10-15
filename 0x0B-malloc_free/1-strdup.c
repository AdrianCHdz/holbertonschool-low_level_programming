#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - prints the pointer to a new space in memory which is the copy.
 * @a: first counter.
 * @b: counter of the string
 * @copy: the pointer to the new string.
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

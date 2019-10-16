#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - copy two diferent strings into one diferent
 * @s1: The first string to be copied.
 * @s2: The second string to be copied.
 * Return: The copied string unless it is NULL in that case return NULL
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char *copy;

	/*if (s1 == NULL)
	{
		s1 = 0;
	}
	if (s2 == NULL)
	{
		s2 = 0;
	}*/
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	copy = malloc((sizeof(char) * (a + b)) + 1);
	if (copy == NULL)
	{
		return ('\0');
	}
	while (s1[c] != '\0')
	{
		copy[c] = s1[c];
		c++;
	}
	while (s2[d] != '\0')
	{
		copy[c] = s2[d];
		d++;
		c++;
	}
	copy[c] = '\0';
	return (copy);
}

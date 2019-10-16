#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char from a size
 * @size: amount of times the character will be printed
 * @c: character to be printed
 * Return: the string replaced with a character
 * NULL if there the size is 0 or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *string;

	string = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return ('\0');
	}
	else if (string == '\0')
	{
		return ('\0');
	}
	for (a = 0; a < size; a++)
	{
		string[a] = c;
	}
	return (string);
}

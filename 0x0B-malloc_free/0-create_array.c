#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char from a size
 * @a: a counter
 * @string: Pointer to a char that creates the array
 * Return: the string replaced with a character, or NULL if if there is no size
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

#include "holberton.h"
#include <stdlib.h>
/**
 *
 *
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
	for (a = 0; a < size; a++)
	{
		string[a] = c;
	}
	return (string);
}

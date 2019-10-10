#include "holberton.h"
/**
 * _strlen_recursion - Prints the lenght of the sentence.
 *
 * @s: string to be checked out.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

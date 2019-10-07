#include "holberton.h"
/**
 * _strchr - check the code for Holberton School students.
 * @c: the character that we will need to find.
 * @s: the string that will be printed
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == c)
		{
			return (s + a);
		}
		a++;
	}
	if (s[a] == c)
	{
		return (s + a);
	}
	return (0);
}

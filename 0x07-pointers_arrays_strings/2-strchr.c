#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
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
	return (0);
}

#include "holberton.h"
/**
 * _strpbrk - find the firt character in the string that matches.
 * @s: string to be valued.
 * @accept: the string from which will be valued.
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}
	return (0);
}

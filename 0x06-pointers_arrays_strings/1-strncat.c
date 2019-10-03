#include "holberton.h"

/**
 * _strncat - adds a new string to the principal string
 * @n: the value that will determine the characters that will be printed.
 * @dest: the string from which is going to be added the next.
 * @src: the new string that will be added.
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		if (b < n)
		{
			dest[a] = src[b];
		}
		a++;
		b++;
	}
	return (dest);
}

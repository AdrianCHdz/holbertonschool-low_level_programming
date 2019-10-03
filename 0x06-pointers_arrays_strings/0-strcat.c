#include "holberton.h"
/**
 * _strcat - adds a new string to the principal string
 * @dest: the string from which is going to be added the next.
 * @src: the new string that will be added.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
		dest[a + 1] = '\0'
	}
	return (dest);
}

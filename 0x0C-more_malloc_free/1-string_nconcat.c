#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concat the strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: delimiter of the second string.
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a = 0;
	unsigned int b = 0;
	int c = 0;
	unsigned int d = 0;
	char *copy;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	if (n >= b)
	{
		n = b;
	}
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
	while (s2[d] != '\0' && d < n)
	{
		copy[c] = s2[d];
		d++;
		c++;
	}
	copy[c] = '\0';
	return (copy);
}

#include "holberton.h"
/**
 * _strspn - Returns the number of bytes in the initial segment.
 * @s: The string that will be compared.
 * @accept: The string from which the segment will be compared with.
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!(accept[b]))
			break;
	}
	return (a);
}

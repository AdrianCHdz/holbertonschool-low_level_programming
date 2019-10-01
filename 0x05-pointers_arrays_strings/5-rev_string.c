#include <stdio.h>
/**
 * rev_string - Print a string backwards
 * @s: the characters to be printed
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int position = 0;
	int b = 0;
	int c;

	while (s[position] != '\0')
	{
		position++;
	}
	position -= 1;
	while (s[position] > s[b])
	{
		c = s[position];
		s[position] = s[b];
		s[b] = c;
		b++;
		position--;
	}
}

#include <stdio.h>
/**
 * rev_string - Print a string backwards
 * @s: the characters to be printed
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int position = 0;
	int backwards = 0;
	int c;

	while (s[position] != '\0')
	{
		position++;
	}
	position -= 1;
	while (position > backwards)
	{
		c = s[position];
		s[position--] = s[backwards];
		s[backwards++] = c;
	}
}

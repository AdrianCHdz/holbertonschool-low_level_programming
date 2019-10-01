#include "holberton.h"
/**
 * print_rev - print text in reverse
 * @s: The character to be printed
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int position = 0;

	while (s[position] != '\0')
	{
		position++;
	}
	s -= 1;
	while (s[position] > 0)
	{
		_putchar(s[position]);
		position--;
	}
	_putchar('\n');
}

#include "holberton.h"
/**
 * _puts - print the characters
 * @str: string of characters to be printed
 * Return: Always 0.
 */
void _puts(char *str)
{
	int position;

	while (position[str] != '\0')
	{
		_putchar(position[str]);
		position++;
	}
	_putchar('\n');
}

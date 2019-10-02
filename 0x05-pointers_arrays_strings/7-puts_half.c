#include "holberton.h"

/**
 * puts_half - print only the half of the string
 * @str: the string to be printed
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int position;
	int m;

	while (str[position] != '\0')
	{
		position++;
	}
	if (position % 2 != 0)
	{
		position += 1;
	}
	m = position / 2;
	while (str[m] =! '\0')
	{
		_putchar(str[m]);
		m++;
	}
	_putchar('\n');
}

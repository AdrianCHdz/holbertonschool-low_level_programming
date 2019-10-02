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

	while ((str[position]) != '\0')
	{
		position++;
	}
	position -= 1;
	m = (position / 2);
	if (position % 2 != 0)
	{
		m += 1;
	}
	while (m <= position)
	{
		_putchar(str[m]);
		m++;
	}
	_putchar('\n');
}

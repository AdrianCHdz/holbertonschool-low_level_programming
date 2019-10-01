#include "holberton.h"

/**
 * puts2 - print only the odd numbers.
 * @str: the values that will be comming.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int position;

	while (position[str] != 0)
	{
		position++;
		if (position[str] % 2 == 0)
		{
			_putchar(position[str]);
		}
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 * puts2 - print only the odd numbers.
 * @str: the values that will be comming.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int position;

	while (str[position] != 0)
	{
		if (str[position] % 2 == 0)
		{
			_putchar(str[position]);
		}
		position++;
	}
	_putchar('\n');
}

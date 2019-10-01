#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int position;

	while (position[str] != 0)
	{
		if (position[str] % 2 == 0)
		{
			_putchar(position[str]);
		}
		position++;
	}
	_putchar('\n');
}

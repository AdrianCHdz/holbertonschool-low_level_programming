#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 *@n: the value determining the number of lines
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int a;

	for (a = 0 ; a < n; a++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

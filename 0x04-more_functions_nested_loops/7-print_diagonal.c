#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: the value that will determine the number of diagonals
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (!(n == 98))
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
	        }
	}
	else if (n >= 98)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (!(n == 98))
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
		}
	}
}

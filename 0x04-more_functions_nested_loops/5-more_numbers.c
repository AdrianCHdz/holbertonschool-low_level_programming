#include "holberton.h"

/**
 * more_numbers - print 10 times numbers from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int lp;
	int num;

	for (lp = 0; lp <= 9; lp++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}

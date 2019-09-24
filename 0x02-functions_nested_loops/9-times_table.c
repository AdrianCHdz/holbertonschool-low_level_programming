#include "holberton.h"

/**
 * times_table - check the code for Holberton School students.
 *
 */
void times_table(void)
{
	int h;
	int m;
	int j;

	for (h = 0; h <= 9; h++)
	{
		for (m = 0; m <= 9; m++)
		{
			j = m * h;
			if (j < 10)
			{
				if (m > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(j + '0');
				if (m <= 8)
					_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				if (m <= 8)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}

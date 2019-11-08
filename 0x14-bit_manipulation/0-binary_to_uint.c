#include "holberton.h"
/**
 * binary_to_uint - converts binary to decimal;
 * @d: The binary number to be printed
 * Return: The decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int n = 0;

	while (b[n])
	{
		if (b[n] != '1' && b[n] != '0')
		{
			return (0);
		}
		else
		{
			num = num << 1;
			num += (b[n] - '0');
		}
		n++;
	}
	return (num);
}

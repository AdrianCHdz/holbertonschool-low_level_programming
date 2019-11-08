#include "holberton.h"
/**
 * get_bit - gets the number in the specified position
 * @n: The binary number
 * @index: The position from where is it going to be found
 * Return: The number found
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m = 0;

	if (index > 32)
		return (-1);
	while (m < index)
	{
		n = n >> 1;
		m++;
	}
	return (n & 1);
}

#include "holberton.h"
/**
 * _pow_recursion - print an x character to the y power
 *
 * @x: the character that will be powered
 * @y: the power
 * Return: The number to the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	else
		return (0);
}

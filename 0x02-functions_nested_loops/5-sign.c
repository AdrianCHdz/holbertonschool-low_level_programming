#include "holberton.h"
/**
 * print_sign - prints the sign of a number
 *@n: Number to be checked
 *
 * Return: Always 1 if n is greater than zero
 * 0 if it is zero
 * -1 if the number is less than zero
 */

int print_sign(int n)
{
	int a = 43;
	int b = 48;
	int c = 45;

	if (n > 0)
	{
		_putchar(a);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(b);
		return (0);
	}
	else
	{
		_putchar(c);
		return (-1);
	}
}

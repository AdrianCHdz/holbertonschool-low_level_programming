#include "holberton.h"

/**
 * factorial - prints the factorial of the number.
 *
 * @n: the value from which the factorial will be found.
 * Return: Always the factorial number
 * -1 if the number is negative
 * 1 if the number is 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

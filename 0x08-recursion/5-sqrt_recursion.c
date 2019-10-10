#include "holberton.h"

/**
 * sqroot - find the square root of the number given
 * @n: the square root of the number.
 * @a: the number from which will be ecuated
 * Return: Always 0.
 */
int sqroot(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (sqroot(n, (a + 1)));
	}
}
/**
 * _sqrt_recursion - the square root of the number
 * @n: the number from where to find the square root.
 * Return: the square root.
 */
int _sqrt_recursion(int n)
{
	return (sqroot(n, 0));
}

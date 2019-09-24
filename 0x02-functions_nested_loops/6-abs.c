#include "holberton.h"
/**
 * _abs - find the absolute value
 *@n: find the absolute value
 *
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}

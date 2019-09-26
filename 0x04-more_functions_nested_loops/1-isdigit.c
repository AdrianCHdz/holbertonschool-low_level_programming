#include "holberton.h"
/**
 * _isdigit - verify if is digit
 * @c: the number to be checked
 * Return: Always 1 if digit.
 * return 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

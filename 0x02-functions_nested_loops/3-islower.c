#include "holberton.h"

/**
 * _islower  - Checks if the characters are lowercase
 *@c: the value to be checked
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

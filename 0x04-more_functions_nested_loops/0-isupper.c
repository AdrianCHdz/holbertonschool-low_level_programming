#include "holberton.h"
/**
 * _isupper - will check if the character is upper
 *@c: the letter to be checked
 * Return: Always 1 if upper
 * return 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && 'Z' <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

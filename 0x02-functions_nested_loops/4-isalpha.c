#include "holberton.h"
/**
 * _isalpha - Check if the character is uppercase
 *@c: character to look at
 *
 * Return: Always 1 if uppercase
 * iof not always 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}

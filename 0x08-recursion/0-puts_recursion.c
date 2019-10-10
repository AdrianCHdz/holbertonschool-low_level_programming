#include "holberton.h"
/**
 * _puts_recursion - Print the string.
 *
 * @s: The pointer to the sentence to be printed
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}

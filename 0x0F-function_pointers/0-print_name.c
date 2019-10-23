#include <stdio.h>
/**
 * print_name - prints a name
 * @name: The name that will be printed
 * @f: pointer to pointer type char.
 *
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != '\0' && f != '\0')
	{
		(*f)(name);
	}
}

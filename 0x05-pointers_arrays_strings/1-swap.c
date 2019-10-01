#include "holberton.h"
/**
 * swap_int - change both numeric values
 * @a: the fisrt value to be changed
 * @b: the second value to be changed
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

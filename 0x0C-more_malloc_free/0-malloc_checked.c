#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - if malloc fails termination in 98.
 * @b: the size of the memory that will be allocated
 * Return: the pointer to the memory allocated.
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}

#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - prints buffer in hexa
 * @nmemb: the number of elements that will be in the string
 * @size: the size of the type of data
 * Return: dimensions of the string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *isize;
	unsigned int a = 0;
	unsigned int mul = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	isize = (void *)malloc(mul);
	if (isize == NULL)
	{
		return (NULL);
	}
	while (a < mul)
	{
		*(isize + a) = 0;
		a++;
	}
	return (isize);
}

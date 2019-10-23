#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints all the elments of the array.
 * @array: the array of numbers to be printed
 * @size: size of the array.
 * @action: pointer to function print where integer is sent.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int a = 0;

	if (array != '\0' && action != '\0')
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}

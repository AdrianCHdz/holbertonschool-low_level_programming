#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - return the number of times a coincidence is met
 * @array: the integer to check
 * @cmp: the pointer to a function.
 * @size: the size that the array will have
 *
 * Return: the number of coincidences of the array.
 * if the size of the array equals 0 return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size != 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (a = 0; a < size; a++)
			{
				if (cmp(array[a]) != 0)
					return (a);
			}
		}
	}
	return (-1);
}

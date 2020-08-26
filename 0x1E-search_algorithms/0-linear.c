#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - This funcion will search a value of an array of integers
 * @array: an array of integers with undifined numbers
 * @size: The size of the array
 * @value: The number to be searched
 *
 * Return: index where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array)
	{
		for (a = 0; a < size; a++)
		{
			printf("Value checked array[%lu] = [%d]\n", a, array[a]);
			if (array[a] == value)
				return (a);
		}
	}
	return (-1);
}

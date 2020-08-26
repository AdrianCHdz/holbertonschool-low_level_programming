#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * customl_search - This funcion will search a value of an array of integers
 * @array: an array of integers with undifined numbers
 * @size: The size of the array
 * @value: The number to be searched
 * @min: Delimiter value from where to start
 *
 * Return: index where the value is located
 */
size_t customl_search(int *array, size_t size, int value, size_t min)
{
	for (; min <= size; min++)
	{
		printf("Value checked array[%lu] = [%d]\n", min, array[min]);
		if (array[min] == value)
			return (min);
	}
	return (-1);
}
/**
 * jump_search - This funcion talks by itself
 * @array: an array of integers with undifined numbers
 * @size: The size of the array
 * @value: The number to be searched
 *
 * Return: index where the value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t min = 0, max = 0;
	int res = -1;
	char *found = "Value found between indexes [%ld] and [%ld]\n";

	if (array)
	{
		while (1)
		{
			if (value <= array[max])
			{
				printf(found, min, max);
				if (max > size)
					max = size - 1;
				res = customl_search(array, max, value, min);
				return (res > 0 ? res : -1);
			}
			min = max;
			max += sqrt(size);
			customl_search(array, min, value, min);
		}
	}
	return (-1);
}

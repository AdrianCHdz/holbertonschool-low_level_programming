#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * binary - This funcion talks by itself
 * @array: an array of integers with undifined numbers
 * @size: The size of the array
 * @value: The number to be searched
 * @ult: the minimunt
 *
 * Return: index where the value is located
 */
int binary(int *array, size_t size, int value, size_t ult)
{
	size_t min = ult, max = size, tmp = 0;

	if (array)
	{
		while (min <= max)
		{
			printf("Searching in array: ");
			for (tmp = min; tmp <= max; tmp++)
				printf(tmp != max ? "%d, " : "%d\n",
				       array[tmp]);
			tmp = (max + min) / 2;
			if (array[tmp] > value)
				max = tmp - 1;
			else if (array[tmp] < value)
				min = tmp + 1;
			else
				return (tmp);
		}
	}
	return (-1);
}
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
	size_t a = min;

	for (; a <= size; a++)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}
	return (-1);
}
/**
 * exponential_search - This funcion talks by itself
 * @array: an array of integers with undifined numbers
 * @size: The size of the array
 * @value: The number to be searched
 *
 * Return: index where the value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t min = 0, max = 1;
	int res = -1;
	char *found = "Value found between indexes [%ld] and [%ld]\n";

	if (array)
	{
		while (max <= size - 1)
		{
			if (value <= array[max])
			{
				printf(found, min, max);
				res = binary(array, max, value, min);
				if (res > 0)
					return (res);
			}
			min = max;
			max = max * 2;
			customl_search(array, min, value, min);
		}
		max = size - 1;
		printf(found, min, max);
		res = binary(array, max, value, min);
		if (res > 0)
			return (res);
	}
	return (-1);
}

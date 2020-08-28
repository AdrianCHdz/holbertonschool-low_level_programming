#include "search_algos.h"
#include <stdio.h>
/**
 * interpolation_search - This funcion talks by itself
 * @array: an array of integers with undifined numbers
 * @size: The size of the array
 * @value: The number to be searched
 *
 * Return: index where the value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t min = 0, max = size - 1, mid = 0;

	if (array)
	{
		while (min <= max)
		{
			mid = min + (((double)(max - min)
				      / (array[max] - array[min]))
				     * (value - array[min]));
			if (mid > (size - 1))
			{
				printf("Value checked array[%ld] is out of range\n", mid);
				break;
			}
			else
				printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
			if (array[mid] < value)
				max = mid - 1;
			else if (array[mid] > value)
				min = mid + 1;
			else
				return (mid);
		}
	}
	return (-1);
}

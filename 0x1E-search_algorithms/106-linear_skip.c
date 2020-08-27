#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * customl_search - This funcion will search a value of an array of integers
 * @max: the delimiter in which the range of searches will be done
 * @value: The number to be searched
 * @min: A list that will go throught all the values
 *
 * Return: index where the value is located
 */
skiplist_t *customl_search(size_t max, int value, skiplist_t *min)
{
	while (min->next && min->index <= max)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       min->index, min->n);
		if (min->n == value)
			return (min);
		min = min->next;
	}
	return (NULL);
}

/**
 * linear_skip - This funcion will search a value in an array of integers
 * @list: A skip list of integers
 * @value: The number to be searched
 *
 * Return: index where the value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *min = NULL, *node = NULL;
	char *found = "Value found between indexes [%ld] and [%ld]\n";

	if (list)
	{
		while (list->express)
		{
			if (value <= list->n)
			{
				printf(found, min->index, list->index);
				node = customl_search(list->index, value, min);
				return (node);
			}
			min = list;
			if (list->express)
				list = list->express;
			customl_search(list->index, value, list);
		}
		printf(found, min->index, list->index);
		node = customl_search(list->index, value, min);
	}
	return (node);
}

#include "search_algos.h"
#include <stdio.h>
#include <math.h>
/**
 * customl_search - This funcion will search a value of an array of integers
 * @max: the delimiter in which the range of searches will be done
 * @value: The number to be searched
 * @min: A list that will go throught all the values
 *
 * Return: index where the value is located
 */
listint_t *customl_search(size_t max, int value, listint_t *min)
{
	while (min && min->index <= max)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       min->index, min->n);
		if (min->n == value)
			return (min);
		min = min->next;
	}
	return (min = NULL);
}
/**
 * jump_list - This function will execute the jump search with a linked list
 * @list: list of integers with undifined numbers
 * @size: The size of the array
 * @value: The number to be searched
 *
 * Return: index where the value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *max = list, *node = NULL;
	int a = 0;
	char *found = "Value found between indexes [%ld] and [%ld]\n";

	if (list)
	{
		while (max->next)
		{
			if (value <= max->n)
			{
				printf(found, list->index, max->index);
				node = customl_search(max->index, value, list);
				return (node);
			}
			list = max;
			for (a = sqrt(size); a > 0 && max->next; a--)
				max = max->next;
			customl_search(max->index, value, max);
		}
		printf(found, list->index, size - 1);
		node = customl_search(size - 1, value, list);
	}
	return (node);
}

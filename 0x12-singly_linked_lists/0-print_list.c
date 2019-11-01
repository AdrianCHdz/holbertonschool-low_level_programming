#include "lists.h"
/**
 * print_list - Prints the content of the lists
 * @h: the pointer to the content of the structure
 * Return: How many elements where printed.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
		}
		count++;
		h = (*h).next;
	}
	return (count);
}

#include "lists.h"

/**
 * listint_len - counts the number of elements in the list
 * @h: The list to be valued
 *
 * Return: The lenght of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}

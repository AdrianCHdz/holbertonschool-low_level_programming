#include "lists.h"
/**
 * dlistint_len - counts the number of elemts in a list
 * @h: A pointer to the list to be valued
 * Return: The lenght of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}

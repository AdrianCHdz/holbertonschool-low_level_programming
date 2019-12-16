#include "lists.h"
/**
 * print_dlistint - prints a double linked list
 * @h: A pointer to the adress of the head
 * Return: The size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}

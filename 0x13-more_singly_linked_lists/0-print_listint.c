#include "lists.h"
/**
 * print_listint - prints the list
 * @h: The list to be printed
 *
 * Return: The number of elements printed
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}

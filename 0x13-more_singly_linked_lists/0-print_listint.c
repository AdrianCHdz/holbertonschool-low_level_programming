#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
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

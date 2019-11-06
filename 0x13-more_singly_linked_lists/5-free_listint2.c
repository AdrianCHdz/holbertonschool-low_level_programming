#include "lists.h"
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}

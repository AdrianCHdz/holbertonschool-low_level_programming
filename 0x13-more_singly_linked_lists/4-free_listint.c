#include "lists.h"
/**
 * free_listint - frees the nodes of the list
 * @head: The list to be freed
 *
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}

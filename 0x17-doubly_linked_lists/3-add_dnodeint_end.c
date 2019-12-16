#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node in the ned of the list
 * @head: A double pointer to the list
 * @n: The element that will take the list
 * Return: The head with the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add, *liscounter;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->prev = NULL;
	if (*head == NULL)
	{
		add->next = *head;
		*head = add;
	}
	else
	{
		liscounter = *head;
		while (liscounter->next != NULL)
		{
			liscounter = liscounter->next;
		}
		add->prev = liscounter;
		liscounter->next = add;
	}
	return (*head);
}

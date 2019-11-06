#include "lists.h"

/**
 * add_nodeint_end - Adds a new node in the ned of the list
 * @head: A double pointer to the list
 * @n: The element that will take the list
 * Return: The head with the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add, *liscounter;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
	{
		return (NULL);
	}
	add->n = n;
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
		liscounter->next = add;
	}
	return (*head);
}

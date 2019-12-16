#include "lists.h"
/**
 * add_dnodeint - Add a double linked list at the beginning
 * @head: A pointer to the begging of the list
 * @n: The value that the node will have
 * Return: The adress of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	if (head == NULL)
	{
		newnode->next = NULL;
	}
	else
	{
		newnode->next = *head;
		*head = newnode;
		(*head)->prev = newnode;
	}
	return (newnode);
}

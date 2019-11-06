#include "lists.h"

/**
 * add_nodeint - Adds an element to the list
 * @head: A double pointer to the list
 * @n: The elements that will take the nodes
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}

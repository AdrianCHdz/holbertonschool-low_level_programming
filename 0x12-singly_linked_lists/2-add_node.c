#include "lists.h"
/**
 * add_node - adds a node
 * @head: its a pointer to the structure
 * @str: The name that must be integrated in the structure.
 *
 * Return: A pointer containing the direction of the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newlist;
	int i;

	newlist = malloc(sizeof(list_t));
	if (newlist == NULL)
	{
		return (NULL);
	}
	newlist->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	newlist->len = i;
	*head = newlist;
	return (newlist);
}

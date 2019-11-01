#include "lists.h"
/**
 * list_len - prints the lenght of the members printed
 * @h: The pointer to a list that will be valued
 *
 * Return: The lenght of each of the elements in the struct.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = (*h).next;
	}
	return (count);
}

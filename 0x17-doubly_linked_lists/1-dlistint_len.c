#include "lists.h"

/**
 * dlistint_len - return number of elements of a dlistint_t list
 * @h: Pointer to the head of the list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}

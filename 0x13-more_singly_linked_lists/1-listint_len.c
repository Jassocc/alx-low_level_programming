#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: list
 * Return:  number of elements
 */
size_t listint_len(const listint_t *h)
{
	int node;

	node = 0;
	while (h != NULL)
	{
		node = node + 1;
		h = h->next;
	}
	return (node);
}

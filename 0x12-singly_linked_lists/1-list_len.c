#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list.
 * @h: list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}

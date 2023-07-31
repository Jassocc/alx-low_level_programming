#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node;

	node = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		node = node + 1;
		h = h->next;
	}
	return (node);
}

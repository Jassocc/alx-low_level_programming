#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at given position
 * @h: pointer to head
 * @idx: index
 * @n: node data
 * Return: address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = *h, *nod;
	unsigned int a = idx;
	int b = n;

	if (a == 0)
	{
		add_dnodeint(h, b);
	}
	for (; a != 1; a--)
	{
		new_node = new_node->next;
		if (new_node == NULL)
			return (NULL);
	}
	if (new_node->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	nod = malloc(sizeof(dlistint_t));
	if (nod == NULL)
	{
		return (NULL);
	}
	nod->n = n;
	nod->prev = new_node;
	nod->next = new_node->next;
	new_node->next->prev = nod;
	new_node->next = nod;
	return (nod);
}

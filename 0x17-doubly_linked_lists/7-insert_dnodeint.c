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
	dlistint_t *new_node, *cur;
	unsigned int i;

	if (idx == 0)
	{
		add_dnodeint(h, n);
	}
	cur = *h;
	for (i = 0; i < idx - 1 && cur != NULL; i++)
	{
		cur = cur->next;
	}
	if (i != idx - 1)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = cur->next;
	new_node->prev = cur;
	if (cur->next != NULL)
	{
		cur->next->prev = new_node;
	}
	cur->next = new_node;
	return (new_node);
}

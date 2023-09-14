#include "lists.h"
/**
 * ins_n - inserts node
 * @temp: pointer
 * @n: node data
 * Return: address
 */
dlistint_t *ins_n(dlistint_t *temp, int n)
{
	dlistint_t *new, *t;

	t = temp;
	new = malloc(sizeof(struct dlistint_s));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = t;
	new->prev = t->prev;
	t->prev->next = new;
	t->prev = new;
	return (new);
}
/**
 * insert_dnodeint_at_index - inserts node at given position
 * @h: pointer to head
 * @idx: index
 * @n: node data
 * Return: address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	unsigned int a = idx;
	int b = n;

	if (a == 0)
	{
		add_dnodeint(h, b);
	}
	if (!h)
	{
		return (NULL);
	}
	new_node = *h;
	while ((a != 0) && (new_node->next))
	{
		a = a - 1;
		new_node = new_node->next;
		if (a == 0)
		{
			return (ins_n(new_node, b));
		}
	}
	if (a == 1)
	{
		return (add_dnodeint_end(h, b));
	}
	return (NULL);
}

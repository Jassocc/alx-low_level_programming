#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: value to be stored in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *cur;
	unsigned int a;

	if (!h)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	cur = *h;
	for (a = 0; a < idx - 1 && cur != NULL; a++)
	{
		cur = cur->next;
	}
	if (a != idx - 1 || !cur)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = cur->next;
	new->prev = cur;
	if (cur->next != NULL)
	{
		cur->next->prev = new;
	}
	cur->next = new;
	return (new);
}

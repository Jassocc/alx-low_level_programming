#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node
 * @head: pointer
 * @index: given idx
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx;
	dlistint_t *cur;

	cur = head;
	idx = index;
	if (!head)
	{
		return (NULL);
	}
	while (idx && cur->next)
	{
		cur = cur->next;
		idx = idx - 1;
	}
	if (idx == 0)
	{
		return (cur);
	}
	return (NULL);
}

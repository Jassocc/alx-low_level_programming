#include "lists.h"
/**
 * free_dlistint - free a list
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur;

	cur = head;
	if (!cur)
	{
		return;
	}
	while (cur && cur->next)
	{
		cur = cur->next;
		free(cur->prev);
	}
	free(cur);
}

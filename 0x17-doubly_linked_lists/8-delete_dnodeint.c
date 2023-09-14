#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node
 * @head: start
 * @index: index
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = NULL;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	cur = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		return (1);
	}
	while ((index != 0) && (cur->next != NULL))
	{
		index = index - 1;
		cur = cur->next;
	}
	if (index == 0)
	{
		cur->prev->next = cur->next;
		if (cur->next != NULL)
		{
			cur->next->prev = cur->prev;
		}
		free(cur);
		return (1);
	}
	return (-1);
}

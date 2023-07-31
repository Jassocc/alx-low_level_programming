#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 * @head: list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *temp, *temporary;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (a = 0; a < (index - 1) && temp != NULL; a++)
	{
		temp = temp->next;
	}
	if (a != (index - 1) || temp->next == NULL)
	{
		return (-1);
	}
	temporary = temp->next;
	temp->next = (temp->next)->next;
	free(temporary);
	return (1);
}

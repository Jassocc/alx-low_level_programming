#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: list
 * @idx: index of the list
 * @n: data
 * Return:  the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *temp, *node;

	a = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	temp = *head;
	for (; a < (idx - 1); a++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = temp->next;
	temp->next = node;
	return (node);
}

#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: pointer to start
 * @n: data
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cur, *new_node;

	if (!head)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(struct dlistint_s));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}
	cur = *head;
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	new_node->next = NULL;
	new_node->prev = cur;
	cur->next = new_node;
	return (new_node);
}

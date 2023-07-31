#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv, *nxt;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	prv = NULL;
	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}
	(*head) = prv;
	return (*head);
}

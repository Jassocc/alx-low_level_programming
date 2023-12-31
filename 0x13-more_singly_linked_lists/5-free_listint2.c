#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *pointer;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		pointer = *head;
		*head = pointer->next;
		free(pointer);
	}
}
